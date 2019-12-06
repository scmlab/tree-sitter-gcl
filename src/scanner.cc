#include <tree_sitter/parser.h>
#include <vector>
#include <queue>
#include <cwctype>
#include <cassert>
#include <cstring>
#include <stdint.h>

namespace {

    // If we could somehow force the CI to use C++11, we could use decltype
    // instead of using this work-around of declaring aliases up-front.
    typedef uint32_t queued_dedent_count_type;
    typedef uint16_t indent_length_stack_element_type;

    using std::vector;
    using std::queue;

    enum TokenType {
        NEWLINE,
    };

    struct Scanner {
        Scanner() {
            deserialize(NULL, 0);
        }

        unsigned serialize(char *buffer) {
            size_t n_copied_so_far = 0;
            size_t n_to_copy = sizeof(queued_dedent_count_type);

            std::memcpy((void *) &(buffer[n_copied_so_far]),
                        (void *) &queued_dedent_count,
                        n_to_copy);
            n_copied_so_far += n_to_copy;

            n_to_copy = indent_length_stack.size() * sizeof(indent_length_stack_element_type);
            if (n_copied_so_far + n_to_copy > TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
                n_to_copy = TREE_SITTER_SERIALIZATION_BUFFER_SIZE - n_copied_so_far;
                n_to_copy -= n_to_copy % sizeof(indent_length_stack_element_type);
            }
            std::memcpy((void *) &(buffer[n_copied_so_far]),
                        (void *) indent_length_stack.data(),
                        n_to_copy);
            n_copied_so_far += n_to_copy;

            return n_copied_so_far;
        }

        void deserialize(const char *buffer, unsigned length) {
            queued_dedent_count = 0;
            indent_length_stack.clear();

            if (buffer == NULL) {
                indent_length_stack.push_back(0);
                return;
            }

            size_t n_copied_so_far = 0;
            size_t n_to_copy = sizeof(queued_dedent_count);

            if (length < n_to_copy) return;
            std::memcpy((void *) &queued_dedent_count,
                        (void *) &(buffer[n_copied_so_far]),
                        n_to_copy);
            n_copied_so_far += n_to_copy;

            n_to_copy = length - n_copied_so_far;
            n_to_copy -= n_to_copy % sizeof(indent_length_stack_element_type);
            if (n_to_copy == 0) {
                indent_length_stack.push_back(0);
                return;
            }
            indent_length_stack.resize(n_to_copy / sizeof(indent_length_stack_element_type));
            std::memcpy((void *) indent_length_stack.data(),
                        (void *) &(buffer[n_copied_so_far]),
                        n_to_copy);
        }

        void advance(TSLexer *lexer) {
            lexer->advance(lexer, false);
        }

        void skip(TSLexer *lexer) {
            lexer->advance(lexer, true);
        }

        // returns True if newline \n were skipped
        bool skipJunk(TSLexer *lexer) {
            bool skippedNewline = false;

            // // assuming that `get_column` is correct before skipping
            // setCarriage(lexer);

            while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' || lexer->lookahead == '\n') {
                if (lexer->lookahead == '\n') {
                    skippedNewline = true;
                    skip(lexer);
                    lexer->mark_end(lexer);
                } else {
                    skip(lexer);
                }
            }

            return skippedNewline;
        }

        void newline() {
            token_queue.push(NEWLINE);
        }

        bool issueToken(TSLexer *lexer) {
            // pop the queue and issue the token if there's any
            if (token_queue.empty()) {
                return false;
            } else {
                lexer->result_symbol = token_queue.front();
                token_queue.pop();
                return true;
            }
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {

            if (token_queue.empty()) {
                  // skip spaces and newline
                  bool skippedNewline = false || skipJunk(lexer);

                  // in case of EOF
                  if (lexer->lookahead == 0) {
                    if (valid_symbols[NEWLINE]) {
                          newline();
                      }
                  } else {
                      // TODO: handle comments
                      bool next_token_is_comment = false;
                      if (!next_token_is_comment) {
                          if (skippedNewline) {
                              if (valid_symbols[NEWLINE]) {
                                  newline();
                              }
                          }
                      }
                  }


            }
            // we can only recognized 1 token at each scan
            return issueToken(lexer);
        }

        vector<indent_length_stack_element_type> indent_length_stack;
        queued_dedent_count_type queued_dedent_count;
        queue<TokenType> token_queue;

        // int column_number;
    };

}

extern "C" {

    void *tree_sitter_GCL_external_scanner_create() {
        return new Scanner();
    }

    bool tree_sitter_GCL_external_scanner_scan(void *payload, TSLexer *lexer,
        const bool *valid_symbols) {
            Scanner *scanner = static_cast<Scanner *>(payload);
            return scanner->scan(lexer, valid_symbols);
        }

        unsigned tree_sitter_GCL_external_scanner_serialize(void *payload, char *buffer) {
            Scanner *scanner = static_cast<Scanner *>(payload);
            return scanner->serialize(buffer);
        }

        void tree_sitter_GCL_external_scanner_deserialize(void *payload,
            const char *buffer,
            unsigned length) {
                Scanner *scanner = static_cast<Scanner *>(payload);
                scanner->deserialize(buffer, length);
            }

            void tree_sitter_GCL_external_scanner_destroy(void *payload) {
                Scanner *scanner = static_cast<Scanner *>(payload);
                delete scanner;
            }

        }

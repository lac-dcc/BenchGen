#ifndef ENUMS_H
#define ENUMS_H

/**
 * @brief Enumeration of different types of tokens.
 *
 * This enum defines various token types used for parsing and analyzing code.
 * Each token type is represented by a negative integer value to distinguish
 * it from positive values that might be used for other purposes.
 */
enum TokenType {
    TOK_IF,         // if statement
    TOK_LOOP,       // loop
    TOK_CALL,       // function call
    TOK_SEQ,        // sequence operation
    TOK_INSERT,     // insert operation
    TOK_REMOVE,     // remove operation
    TOK_NEW,        // new operation
    TOK_CONTAINS,   // contains operation
    TOK_END,        // end of a production rule (e.g. ';')
    TOK_OPAREN,     // open parenthesis '('
    TOK_CPAREN,     // close parenthesis ')'
    TOK_COMMA,      // comma ','
    TOK_EQUAL,      // assignment '='
    TOK_COMMENT,    // ccomment line (e.g. '#')
    TOK_ID,         // identifier (e.g. production rules names)
    TOK_CALL_ID,    // function call identifiers
    TOK_ERROR       // unrecognized token
};

#endif

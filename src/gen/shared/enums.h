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
    TOK_IF = -2,    // Token for an "if" statement
    TOK_LOOP = -3,  // Token for a loop
    TOK_CALL = -4,  // Token for a function call
    TOK_SEQ = -5,   // Token for a sequence operation

    TOK_INSERT = -6,    // Token for an insert operation
    TOK_REMOVE = -7,    // Token for a remove operation
    TOK_NEW = -8,       // Token for creating a new variable
    TOK_CONTAINS = -9,  // Token for a contains operation

    TOK_END = -10,  // Token marking the end of a production rule (e.g., ';')

    TOK_OPAREN = -11,     // Token for an open parenthesis '('
    TOK_CPAREN = -12,     // Token for a close parenthesis ')'
    TOK_COMMA = -13,      // Token for a comma ','
    TOK_EQUAL = -14,      // Token for an equality check or assignment '='
    TOK_UNDERLINE = -15,  // Token for an underline character '_'
    TOK_COMMENT = -16,    // Token for a comment line (e.g., '#')

    TOK_ID = -17,  // Token for an identifier (e.g., production rules names)

    TOK_CALL_ID = -18,  // Token specifically for function call identifiers

    TOK_ERROR = -1  // Token indicating an error or unrecognized token
};

#endif

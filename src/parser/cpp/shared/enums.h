#ifndef ENUMS_H
#define ENUMS_H

enum TokenType {
    TOK_IF = -2,
    TOK_LOOP = -3,
    TOK_CALL = -4,
    TOK_SEQ = -5,

    TOK_INSERT = -6,
    TOK_REMOVE = -7,
    TOK_DEL = -8,
    TOK_NEW = -9,
    TOK_CONTAINS = -10,

    TOK_END = -11,

    TOK_OPAREN = -12,
    TOK_CPAREN = -13,
    TOK_COMMA = -14,
    TOK_EQUAL = -15,
    TOK_UNDERLINE = -16,
    TOK_COMMENT = -17,

    TOK_ID = -18,

    TOK_ERROR = -1
};

enum ASTType {
    AST_CODE = 0,
    AST_LAMBDA = 1,
    AST_ID = 2,
    AST_INSERT = 3,
    AST_REMOVE = 4,
    AST_NEW = 5,
    AST_DEL = 6,
    AST_CONTAINS = 7,
    AST_LOOP = 8,
    AST_CALL = 9,
    AST_SEQ = 10,
    AST_IF = 11,
    AST_IF_PARAM = 12,
    AST_IF_UNDERLINE = 13,
    AST_ELSE_CODE = 14,
    AST_ELSE_UNDERLINE = 15,
};

#endif

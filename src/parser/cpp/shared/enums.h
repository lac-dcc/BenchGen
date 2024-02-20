#ifndef ENUMS_H
#define ENUMS_H

enum Token {
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
    AST_S = 0,
    AST_CODE = 1,
    AST_STRUCT_STRUCTS = 2,
    AST_LAMBDA_STRUCTS = 3,
    AST_INSERT_STRUCT = 4,
    AST_REMOVE_STRUCT = 5,
    AST_NEW_STRUCT = 6,
    AST_DEL_STRUCT = 7,
    AST_CONTAINS_STRUCT = 8,
    AST_LOOP_STRUCT = 9,
    AST_CALL_STRUCT = 10,
    AST_SEQ_STRUCT = 11,
    AST_IF_STRUCT = 12,
    AST_ID_STRUCT = 13,
    AST_STRUCTS_PARAM_IF = 14,
    AST_UNDERLINE_PARAM_IF = 15,
    AST_STRUCTS_ELSE = 16,
    AST_UNDERLINE_ELSE = 17
};

#endif
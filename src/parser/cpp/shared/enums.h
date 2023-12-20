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

    TOK_VAR = -11,
    TOK_END = -12,

    TOK_OPAREN = -13,
    TOK_CPAREN = -14,
    TOK_COMMA = -15,
    TOK_EQUAL = -16,
    TOK_UNDERLINE = -17,

    TOK_ID = -18,

    TOK_ERROR = -1
};

enum NonTerminal {
    NT_S,
    NT_CODE,
    NT_ATRIB,
    NT_VSTRUCTS,
    NT_STRUCTS,
    NT_STRUCT,
    NT_PARAMIF,
    NT_ELSE
};

#endif
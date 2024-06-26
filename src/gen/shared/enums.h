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

    TOK_CALL_ID = -19,

    TOK_ERROR = -1
};

enum ScopeType {
    SCOPE_MAIN_FUNC = 0,
    SCOPE_FOR = 1,
    SCOPE_IF = 2,
    SCOPE_ELSE = 3,
    SCOPE_FUNC = 4
};

#endif

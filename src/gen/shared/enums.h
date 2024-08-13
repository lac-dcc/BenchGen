#ifndef ENUMS_H
#define ENUMS_H

enum TokenType {
    TOK_IF = -2,
    TOK_LOOP = -3,
    TOK_CALL = -4,
    TOK_SEQ = -5,

    TOK_INSERT = -6,
    TOK_REMOVE = -7,
    TOK_NEW = -8,
    TOK_CONTAINS = -9,

    TOK_END = -10,

    TOK_OPAREN = -11,
    TOK_CPAREN = -12,
    TOK_COMMA = -13,
    TOK_EQUAL = -14,
    TOK_UNDERLINE = -15,
    TOK_COMMENT = -16,

    TOK_ID = -17,

    TOK_CALL_ID = -18,

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

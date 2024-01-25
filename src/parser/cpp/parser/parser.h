#ifndef PARSER_H
#define PARSER_H
#include <iostream>

#include "../generator/generator.h"
#include "../lexer/lexer.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

class Parser {
   public:
    int tokenIndex;
    vector<token> tokens;
    Generator generator;

    Parser(vector<token> _tokens) {
        tokenIndex = 0;
        tokens = _tokens;
    }

    void match(int);
    void parse();
    void parse_S();
    void parse_CODE();
    void parse_ATRIB();
    void parse_VSTRUCTS();
    void parse_STRUCTS();
    void parse_STRUCT();
    void parse_PARAMIF();
    void parse_ELSE();
};

#include "parser.cpp"

#endif
#ifndef PARSER_H
#define PARSER_H
#include <iostream>

#include "../generator/generator.h"
#include "../shared/ast.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

class Parser {
   private:
    int tokenIndex;
    vector<token> tokens;
    unique_ptr<S> AST;

    void match(int);
    void parse_S();
    void parse_CODE();
    void parse_STRUCTS();
    void parse_STRUCT();
    void parse_PARAMIF();
    void parse_ELSE();

   public:
    Parser() {
        tokenIndex = 0;
    }

    void setTokens(vector<token>);
    void parse();
    shared_ptr<S> getAST();
};

#include "parser.cpp"

#endif
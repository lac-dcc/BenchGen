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
    shared_ptr<S> AST;

    void match(int);
    shared_ptr<S> parse_S();
    shared_ptr<Code> parse_CODE();
    shared_ptr<Structs> parse_STRUCTS();
    shared_ptr<Struct> parse_STRUCT();
    shared_ptr<ParamIf> parse_PARAMIF();
    shared_ptr<Else> parse_ELSE();

   public:
    Parser() {
        tokenIndex = 0;
        AST = nullptr;
    }

    void setTokens(vector<token>);
    void parse();
    shared_ptr<S> getAST();
};

#include "parser.cpp"

#endif
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
    std::vector<Token> tokens;
    std::shared_ptr<S> AST;

    void match(int);
    std::shared_ptr<S> parse_S();
    std::shared_ptr<Code> parse_CODE();
    std::shared_ptr<Structs> parse_STRUCTS();
    std::shared_ptr<Struct> parse_STRUCT();
    std::shared_ptr<ParamIf> parse_PARAMIF();
    std::shared_ptr<Else> parse_ELSE();

   public:
    Parser() {
        tokenIndex = 0;
        AST = nullptr;
    }

    void setTokens(std::vector<Token>);
    void parse();
    std::shared_ptr<S> getAST();
};

#include "parser.cpp"

#endif

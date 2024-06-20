#ifndef PARSER_H
#define PARSER_H
#include <iostream>

#include "../ast/ast.h"
#include "../generator/generator.h"
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

class Parser {
   private:
    int tokenIndex;
    std::vector<Token> tokens;
    std::shared_ptr<Node> AST;
    std::stack<Call*> currentCall;

    void match(int);
    std::shared_ptr<Node> parse_CODE();
    std::shared_ptr<Node> parse_STATEMENT();
    std::shared_ptr<Node> parse_IFPARAM();
    std::shared_ptr<Node> parse_ELSE();

   public:
    Parser() {
        tokenIndex = 0;
        AST = nullptr;
        currentCall = std::stack<Call*>();
    }

    void setTokens(std::vector<Token>);
    void parse();
    std::shared_ptr<Node> getAST();
};

#endif

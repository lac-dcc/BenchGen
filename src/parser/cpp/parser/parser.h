#ifndef PARSER_H
#define PARSER_H
#include <iostream>

#include "../generator/generator.h"
#include "../shared/block.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

class Parser {
   private:
    int tokenIndex;
    vector<token> tokens;
    shared_ptr<Block> currentBlock;
    shared_ptr<Block> parentBlock;

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
        currentBlock = make_shared<Block>(BT_FUNCTION, nullptr);
        parentBlock = move(currentBlock);
    }

    void setTokens(vector<token>);
    void parse();
    shared_ptr<Block> getControlFlowGraph();
};

#include "parser.cpp"

#endif
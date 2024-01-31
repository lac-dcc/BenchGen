#ifndef PARSER_H
#define PARSER_H
#include <iostream>

#include "../generator/generator.h"
#include "../lexer/lexer.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

class Parser {
   private:
    int tokenIndex;
    vector<token> tokens;
    Generator generator;
    Lexer lexer;

    void match(int);
    void parse_S();
    void parse_CODE();
    void parse_ATRIB();
    void parse_VSTRUCTS();
    void parse_STRUCTS();
    void parse_STRUCT();
    void parse_PARAMIF();
    void parse_ELSE();

   public:
    Parser() {
        tokenIndex = 0;
    }

    void loadLexerConfiguration(string);
    void getTokens(string);
    void parse();
    void writeToFile(string);
};

#include "parser.cpp"

#endif
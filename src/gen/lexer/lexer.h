#ifndef LEXER_H
#define LEXER_H
#include <fstream>
#include <iostream>
#include <regex>
#include <vector>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"

using std::ifstream;

class Lexer {
   private:
    std::vector<LexerRule> rules;
    std::vector<std::string> readFile(std::string);
    std::vector<Token> tokenize(std::string);
    bool matchAnyRule(std::string);
    int matchToken(std::string);

   public:
    Lexer() {}

    void loadConfiguration();
    std::vector<Token> getTokens(std::string);
    std::vector<ProductionRule> getProductionRules(std::string);
};

#endif

#ifndef LEXER_H
#define LEXER_H
#include <fstream>
#include <iostream>
#include <regex>
#include <vector>

#include "../shared/enums.h"
#include "../shared/typedefs.h"

using std::ifstream;

class Lexer {
   private:
    std::vector<lexer_rule> rules;
    std::vector<std::string> readFile(std::string);
    std::vector<token> tokenize(std::string);
    bool matchAnyRule(std::string);
    int matchToken(std::string);
    int getTokenFromId(std::string);

   public:
    Lexer() {}

    void loadConfiguration(std::string);
    std::vector<token> getTokens(std::string);
    std::vector<production_rule> getProductionRules(std::string);
};

#include "lexer.cpp"

#endif

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
    vector<lexer_rule> rules;
    vector<string> readFile(string);
    vector<token> tokenize(string);
    bool matchAnyRule(string);
    int matchToken(string);
    int getTokenFromId(string);

   public:
    Lexer() {}

    void loadConfiguration(string);
    vector<token> getTokens(string);
    vector<production_rule> getProductionRules(string);
};

#include "lexer.cpp"

#endif
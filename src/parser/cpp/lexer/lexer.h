#ifndef LEXER_H
#define LEXER_H
#include <fstream>
#include <iostream>
#include <regex>
#include <vector>

#include "../reader/reader.h"
#include "../shared/typedefs.h"

vector<token> getTokens(string, vector<lexer_rule>);

vector<token> tokenize(string, vector<lexer_rule>);

vector<lexer_rule> loadLexerConfig(string);

bool matchAnyRule(string, vector<lexer_rule>);

int matchToken(string, vector<lexer_rule>);

#include "lexer.cpp"

#endif
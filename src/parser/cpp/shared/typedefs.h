#ifndef TYPEDEFS_H
#define TYPEDEFS_H
#include <iostream>
#include <tuple>
#include <vector>

#include "globalIncludes.h"

typedef struct LexerRule {
	int type;
	std::string regex;
} LexerRule;

typedef struct Token {
	int type;
	std::string text;
} Token;

typedef struct ProductionRule {
	std::string rule;
	std::vector<Token> production;
} ProductionRule;

#endif

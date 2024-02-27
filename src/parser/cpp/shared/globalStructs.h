#ifndef TYPEDEFS_H
#define TYPEDEFS_H
#include <iostream>
#include <tuple>
#include <vector>

#include "globalIncludes.h"

struct LexerRule {
	int type;
	std::string regex;
};

struct Token {
	int type;
	std::string text;
};

struct ProductionRule {
	std::string rule;
	std::vector<Token> production;
};

#endif

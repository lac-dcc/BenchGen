#ifndef TYPEDEFS_H
#define TYPEDEFS_H
#include <iostream>
#include <tuple>
#include <vector>

#include "globalIncludes.h"

typedef std::tuple<std::string, int> lexer_rule;
typedef std::tuple<int, std::string> token;
typedef std::tuple<std::string, std::vector<token>> production_rule;
typedef std::tuple<int, std::vector<int>> parser_rule;

#endif

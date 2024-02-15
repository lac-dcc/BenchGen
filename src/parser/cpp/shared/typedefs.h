#ifndef TYPEDEFS_H
#define TYPEDEFS_H
#include <iostream>
#include <tuple>
#include <vector>

#include "namespaces.h"

typedef tuple<string, int> lexer_rule;
typedef tuple<int, string> token;
typedef tuple<string, vector<token>> production_rule;
typedef tuple<int, vector<int>> parser_rule;

#endif
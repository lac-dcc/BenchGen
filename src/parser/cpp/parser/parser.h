#ifndef PARSER_H
#define PARSER_H
#include <iostream>

#include "../lexer/lexer.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

int tokenIndex;
vector<token> tokens;

void match(int);
void parse(vector<token>);
void parse_S();
void parse_CODE();
void parse_ATRIB();
void parse_VSTRUCTS();
void parse_STRUCTS();
void parse_STRUCT();
void parse_PARAMIF();
void parse_ELSE();

#include "parser.cpp"

#endif
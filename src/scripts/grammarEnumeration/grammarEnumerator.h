#ifndef GRAMMAR_ENUMERATOR_H
#define GRAMMAR_ENUMERATOR_H

#include "constants.h"

bool contains(std::vector<std::string>, std::string);

std::vector<std::string> getNonTerminals();

void enumerateGrammar(std::ofstream *, const int);
void enumerateGrammar(std::vector<std::string>, const std::vector<std::string> *, int, const int, std::ofstream *);
std::vector<std::vector<std::string>> expandSymbol(std::string);
std::vector<std::vector<std::string>> addLineBreak(const std::vector<std::string> *);

void writeToFile(const std::vector<std::string> *, std::ofstream *);

#endif
#ifndef CONTANTS_H
#define CONTANTS_H

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

typedef std::multimap<std::string, std::vector<std::string>> grammar_t;

const grammar_t grammar = {
    {"CODE", {}},
    {"CODE", {"STATEMENT", "CODE"}},
    {"STATEMENT", {"A"}},
    {"STATEMENT", {"B"}},
    {"STATEMENT", {"insert"}},
    {"STATEMENT", {"remove"}},
    {"STATEMENT", {"new"}},
    {"STATEMENT", {"contains"}},
    {"STATEMENT", {"LOOP", "(", "CODE", ")"}},
    {"STATEMENT", {"CALL", "(", "CODE", ")"}},
    {"STATEMENT", {"IF", "(", "IFPARAM"}},
    {"IFPARAM", {"CODE", "ELSE"}},
    {"IFPARAM", {",", "ELSE"}},
    {"ELSE", {"CODE", ")"}},
    {"ELSE", {")"}}};

#endif
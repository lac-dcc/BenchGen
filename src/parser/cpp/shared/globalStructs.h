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

    bool operator==(const Token& other) const {
        return std::tie(type, text) == std::tie(other.type, other.text);
    }
};

struct TokenVectorHash {
    std::size_t operator()(const std::vector<Token>& t) const {
        std::size_t seed = t.size();
        for (auto& i : t) {
            std::size_t h1 = std::hash<int>{}(i.type);
            std::size_t h2 = std::hash<std::string>{}(i.text);
            std::size_t seedo = h1 ^ (h2 << 1);
            seed ^= seedo;
        }
        return seed;
    }
};

struct TokenVectorEqual {
    bool operator()(const std::vector<Token>& t1, const std::vector<Token>& t2) const {
        return t1 == t2;
    }
};

struct ProductionRule {
    std::string rule;
    std::vector<Token> production;
};

#endif

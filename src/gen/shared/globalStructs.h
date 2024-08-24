#ifndef GLOBALSTRUCTS_H
#define GLOBALSTRUCTS_H

#include <iostream>
#include <tuple>
#include <vector>

#include "globalIncludes.h"

/**
 * @brief Represents a lexer rule with a type and a regular expression pattern.
 */
struct LexerRule {
    int type;           // Type of the lexer rule
    std::string regex;  // Regular expression defining the rule
};

/**
 * @brief Represents a token with a type and text content.
 */
struct Token {
    int type;          // Type of the token
    std::string text;  // Text content of the token

    /**
     * @brief Equality operator to compare two Token objects.
     *
     * @param other The other Token object to compare against.
     * @return True if both tokens have the same type and text, otherwise false.
     */
    bool operator==(const Token& other) const {
        return std::tie(type, text) == std::tie(other.type, other.text);
    }
};

/**
 * @brief Hash function object for a vector of Tokens.
 *
 * This structure provides a custom hash function for use in unordered containers
 * such as std::unordered_map or std::unordered_set, where vectors of tokens are keys.
 */
struct TokenVectorHash {
    /**
     * @brief Computes the hash value for a vector of Tokens.
     *
     * @param t The vector of Tokens to hash.
     * @return A size_t hash value representing the vector of Tokens.
     */
    size_t operator()(const std::vector<Token>& t) const {
        size_t seed = t.size();
        for (auto& i : t) {
            size_t h1 = std::hash<int>{}(i.type);
            size_t h2 = std::hash<std::string>{}(i.text);
            size_t seedo = h1 ^ (h2 << 1);
            seed ^= seedo;
        }
        return seed;
    }
};

/**
 * @brief Equality comparison object for vectors of Tokens.
 *
 * This structure provides a custom equality function for use in unordered containers
 * such as std::unordered_map or std::unordered_set, where vectors of tokens are keys.
 */
struct TokenVectorEqual {
    /**
     * @brief Compares two vectors of Tokens for equality.
     *
     * @param t1 The first vector of Tokens.
     * @param t2 The second vector of Tokens.
     * @return True if both vectors contain the same tokens in the same order, otherwise false.
     */
    bool operator()(const std::vector<Token>& t1, const std::vector<Token>& t2) const {
        return t1 == t2;
    }
};

/**
 * @brief Represents a production rule in a grammar, consisting of a rule name and a sequence of Tokens.
 */
struct ProductionRule {
    std::string rule;               // The name or identifier of the production rule
    std::vector<Token> production;  // The sequence of Tokens that defines the production
};

#endif

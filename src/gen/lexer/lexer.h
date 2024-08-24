#ifndef LEXER_H
#define LEXER_H

#include <fstream>
#include <iostream>
#include <regex>
#include <vector>

#include "../shared/enums.h"
#include "../shared/globalStructs.h"

using std::ifstream;

/**
 * @brief The Lexer class is responsible for reading input, applying lexer rules,
 * and generating tokens from the input.
 *
 * The Lexer class provides methods to load configuration rules, tokenize input
 * strings, and generate production rules from files.
 */
class Lexer {
   private:
    std::vector<LexerRule> rules;  // Vector holding the lexer rules

    /**
     * @brief Reads the content of a file into a vector of strings.
     *
     * Each line of the file is stored as a separate string in the vector.
     *
     * @param fileName The path to the file to be read.
     * @return A vector of strings, each representing a line from the file.
     */
    std::vector<std::string> readFile(std::string fileName);

    /**
     * @brief Tokenizes a given string based on the loaded lexer rules.
     *
     * Processes the input string to extract tokens according to the defined
     * lexer rules, handling spaces and matching the longest possible lexeme.
     *
     * @param input The string to tokenize.
     * @return A vector of Tokens extracted from the input string.
     */
    std::vector<Token> tokenize(std::string input);

    /**
     * @brief Checks if a string matches any of the lexer rules.
     *
     * Uses regular expressions to match the input string against each of the
     * defined lexer rules.
     *
     * @param input The string to match against the lexer rules.
     * @return True if the input matches any rule, otherwise false.
     */
    bool matchAnyRule(std::string input);

    /**
     * @brief Matches a string to a specific token type based on lexer rules.
     *
     * Returns the token type of the first rule that matches the given lexeme using
     * regular expressions.
     *
     * @param input The string to match.
     * @return The type of the token matched, or an error type if no match is found.
     */
    int matchToken(std::string input);

   public:
    /**
     * @brief Constructs a Lexer object and loads the configuration rules.
     */
    Lexer();

    /**
     * @brief Loads lexer configuration rules.
     *
     * Initializes the lexer rules with predefined types and regular expressions
     * that will be used for tokenizing input.
     */
    void loadConfiguration();

    /**
     * @brief Gets the tokens from a given file.
     *
     * Reads the content of a file and tokenizes each line to generate a vector of tokens.
     *
     * @param fileName The path to the file from which tokens are to be generated.
     * @return A vector of Tokens extracted from the file.
     */
    std::vector<Token> getTokens(std::string fileName);

    /**
     * @brief Extracts production rules from a given file.
     *
     * Reads a file, tokenizes its content, and extracts production rules defined in the file.
     *
     * @param fileName The path to the file containing production rules.
     * @return A vector of ProductionRules extracted from the file.
     */
    std::vector<ProductionRule> getProductionRules(std::string fileName);
};

#endif

#ifndef PARSER_H
#define PARSER_H

#include <iostream>
#include <stack>
#include <vector>

#include "../ast/ast.h"
#include "../generator/generator.h"
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

/**
 * @brief The Parser class is responsible for parsing a sequence of tokens
 * and constructing an abstract syntax tree (AST).
 *
 * The Parser class provides methods to set the tokens, perform the parsing process,
 * and retrieve the resulting AST. It includes private methods for handling various
 * parsing tasks such as matching tokens and parsing different code structures.
 */
class Parser {
   private:
    int tokenIndex;                 // Index of the current token being processed
    std::vector<Token> tokens;      // Vector holding the sequence of tokens to be parsed
    std::shared_ptr<Node> AST;      // The root of the abstract syntax tree (AST)
    std::stack<Call*> currentCall;  // Stack to track the number of conditionals within a function call, enabling accurate counting of PATH parameters for that function.

    /**
     * @brief Matches the current token against the expected symbol and advances to the next token.
     *
     * @param symbol The expected token type to match.
     */
    void match(int symbol);

    /**
     * @brief Parses a sequence of statements into a code block.
     *
     * @return A shared pointer to the root node of the parsed code block.
     */
    std::shared_ptr<Node> parse_CODE();

    /**
     * @brief Parses a single statement.
     *
     * @return A shared pointer to the node representing the parsed statement.
     */
    std::shared_ptr<Node> parse_STATEMENT();

    /**
     * @brief Parses the parameters for an if statement.
     *
     * @return A shared pointer to the node representing the parsed if parameters.
     */
    std::shared_ptr<Node> parse_IFPARAM();

    /**
     * @brief Parses the else clause of an if statement.
     *
     * @return A shared pointer to the node representing the parsed else clause.
     */
    std::shared_ptr<Node> parse_ELSE();

   public:
    /**
     * @brief Constructs a Parser object with default values.
     *
     * Initializes the token index, sets the AST to nullptr, and prepares an empty stack to track conditionals and PATH parameters within function calls.
     */
    Parser() {
        tokenIndex = 0;
        AST = nullptr;
        currentCall = std::stack<Call*>();
    }

    /**
     * @brief Sets the tokens for the parser to process.
     *
     * Initializes the parser's token list with the provided tokens.
     *
     * @param _tokens The vector of tokens to be parsed.
     */
    void setTokens(std::vector<Token> _tokens);

    /**
     * @brief Initiates the parsing process and builds the abstract syntax tree (AST).
     *
     * Starts the parsing process by calling the parse_CODE function,
     * which builds the AST from the provided tokens.
     */
    void parse();

    /**
     * @brief Returns the root of the abstract syntax tree (AST).
     *
     * Provides access to the root node of the AST, representing the parsed structure of the input code.
     *
     * @return A shared pointer to the root node of the AST.
     */
    std::shared_ptr<Node> getAST();
};

#endif

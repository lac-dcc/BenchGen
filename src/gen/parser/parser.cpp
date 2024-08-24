#include "parser.h"

/**
 * @brief Matches the current token against the expected symbol and advances to the next token.
 *
 * If the current token matches the expected symbol, it moves to the next token.
 * Otherwise, it prints an error message indicating a parsing error.
 *
 * @param symbol The expected token type to match.
 */
void Parser::match(int symbol) {
    if (tokens[tokenIndex].type == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        std::cout << "ERROR PARSING! AT " << tokens[tokenIndex].type << std::endl;
    }
}

/**
 * @brief Parses a sequence of statements into a code block.
 *
 * This function handles parsing different types of statements, using recursive calls
 * to build a tree of nodes representing the structure of the code.
 *
 * @return A shared pointer to the root node of the parsed code block.
 */
std::shared_ptr<Node> Parser::parse_CODE() {
    if ((int)tokens.size() <= tokenIndex) {
        return std::make_shared<LambdaCode>(LambdaCode()); // Return an empty code block if no more tokens
    }
    switch (tokens[tokenIndex].type) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_IF:
        case TOK_ID:
            return std::make_shared<StatementCode>(StatementCode(parse_STATEMENT(), parse_CODE())); // Parse statement followed by code
        case TOK_CPAREN:
        case TOK_COMMA:
            return std::make_shared<LambdaCode>(LambdaCode()); // Return an empty code block
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING CODE! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

/**
 * @brief Parses a single statement.
 *
 * This function identifies the type of statement and parses it accordingly,
 * creating the appropriate node type for each statement.
 *
 * @return A shared pointer to the node representing the parsed statement.
 */
std::shared_ptr<Node> Parser::parse_STATEMENT() {
    switch (tokens[tokenIndex].type) {
        case TOK_INSERT:
            match(tokens[tokenIndex].type);
            return std::make_shared<Insert>(Insert());
        case TOK_REMOVE:
            match(tokens[tokenIndex].type);
            return std::make_shared<Remove>(Remove());
        case TOK_NEW:
            match(tokens[tokenIndex].type);
            return std::make_shared<New>(New());
        case TOK_CONTAINS:
            match(tokens[tokenIndex].type);
            return std::make_shared<Contains>(Contains());
        case TOK_LOOP: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            std::shared_ptr<Loop> loop = std::make_shared<Loop>(Loop(parse_CODE()));
            match(TOK_CPAREN);
            return loop;
        }
        case TOK_CALL: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            match(TOK_CALL_ID);
            int callId = std::stoi(tokens[tokenIndex - 1].text); // Get the call ID
            match(TOK_COMMA);
            Call call = Call();
            currentCall.push(&call);
            call.setId(callId);
            call.setCode(parse_CODE());
            std::shared_ptr<Call> callPtr = std::make_shared<Call>(call);
            match(TOK_CPAREN);
            currentCall.pop();
            return callPtr;
        }
        case TOK_SEQ: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            std::shared_ptr<Seq> seq = std::make_shared<Seq>(Seq(parse_CODE()));
            match(TOK_CPAREN);
            return seq;
        }
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            if (!currentCall.empty()) {
                currentCall.top()->conditionalCounts++;
            }
            return std::make_shared<If>(If(parse_IFPARAM()));
        case TOK_ID:
            match(TOK_ID);
            return std::make_shared<Id>(Id(tokens[tokenIndex - 1].text)); // Create an ID node with the text of the matched token
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING INSTRUCTION! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

/**
 * @brief Parses the parameters for an if statement.
 *
 * This function parses the parameters following an if statement, which can be either
 * a block of code or an underscore followed by a comma, indicating a no-parameter if statement.
 *
 * @return A shared pointer to the node representing the parsed if parameters.
 */
std::shared_ptr<Node> Parser::parse_IFPARAM() {
    switch (tokens[tokenIndex].type) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID: {
            std::shared_ptr<Node> code = parse_CODE(); // Parse the code block
            match(TOK_COMMA);
            return std::make_shared<IfParam>(IfParam(code, parse_ELSE())); // Create an IfParam node with the parsed code and else block
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_COMMA:
            match(TOK_COMMA);
            return std::make_shared<NoParamIf>(NoParamIf(parse_ELSE())); // Create a NoParamIf node
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING IFPARAM! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

/**
 * @brief Parses the else clause of an if statement.
 *
 * This function handles parsing the else clause, which can either contain a block of code
 * or be empty, depending on the syntax following the if statement.
 *
 * @return A shared pointer to the node representing the parsed else clause.
 */
std::shared_ptr<Node> Parser::parse_ELSE() {
    switch (tokens[tokenIndex].type) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID: {
            std::shared_ptr<Node> code = parse_CODE(); // Parse the code block
            match(TOK_CPAREN);
            return std::make_shared<CodeElse>(CodeElse(code)); // Create a CodeElse node
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_CPAREN:
            match(TOK_CPAREN);
            return std::make_shared<NoCodeElse>(NoCodeElse()); // Create a NoCodeElse node
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING ELSE! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

/**
 * @brief Sets the tokens for the parser to process.
 *
 * This function initializes the parser's token list with the provided tokens.
 *
 * @param _tokens The vector of tokens to be parsed.
 */
void Parser::setTokens(std::vector<Token> _tokens) {
    tokens = _tokens;
}

/**
 * @brief Initiates the parsing process and builds the abstract syntax tree (AST).
 *
 * This function starts the parsing process by calling the parse_CODE function,
 * which builds the AST from the provided tokens.
 */
void Parser::parse() {
    AST = parse_CODE();
}

/**
 * @brief Returns the root of the abstract syntax tree (AST).
 *
 * This function provides access to the root node of the AST, representing the
 * parsed structure of the input code.
 *
 * @return A shared pointer to the root node of the AST.
 */
std::shared_ptr<Node> Parser::getAST() {
    return AST;
}

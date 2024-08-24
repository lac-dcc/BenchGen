#include "lexer.h"

using std::ifstream;
using std::regex;

/**
 * @brief Constructs a Lexer object and loads the configuration rules.
 */
Lexer::Lexer() {
    loadConfiguration();
}

/**
 * @brief Reads the content of a specified file into a vector of strings.
 *
 * Each line of the file is stored as a separate string in the vector.
 *
 * @param fileName The path to the file to be read.
 * @return A vector of strings, each representing a line from the file.
 */
std::vector<std::string> Lexer::readFile(std::string fileName) {
    std::vector<std::string> code = {};  // Vector to store file lines
    ifstream file("./" + fileName);
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            code.push_back(line);
        }
        file.close();
    } else {
        // TODO: Error handling: file not found
    }
    return code;
}

/**
 * @brief Tokenizes a given string based on the loaded lexer rules.
 *
 * This function processes the input string to extract tokens according to the
 * defined lexer rules, handling spaces and matching the longest possible lexeme.
 *
 * @param code The string to tokenize.
 * @return A vector of Tokens extracted from the input string.
 */
std::vector<Token> Lexer::tokenize(std::string code) {
    std::vector<Token> tokens = {};  // Vector to store tokens
    for (int i = 0; i < code.size(); i++) {
        std::string lexeme = code.substr(i, 1);  // Building lexeme

        if (lexeme[0] == ' ') {
            continue;
        }

        if (!matchAnyRule(lexeme)) {
            // TODO: Error handling: unknown lexeme
        }

        // Getting largest sequence possible using lookahead
        bool lookaheaded = false;
        while (matchAnyRule(lexeme) && i < code.length() - 1) {
            lookaheaded = true;
            i++;
            std::string c = code.substr(i, 1);
            lexeme += c;

            if (c[0] == ' ') {
                break;
            }
        }
        if (lookaheaded && !matchAnyRule(lexeme)) {
            lexeme = lexeme.substr(0, lexeme.length() - 1);
            i--;
        }

        int cur_token = matchToken(lexeme);
        if (cur_token == TOK_COMMENT) {
            break;
        }
        Token t = {cur_token, lexeme};
        tokens.push_back(t);
    }
    return tokens;
}

/**
 * @brief Checks if a string matches any of the lexer rules.
 *
 * This function uses regular expressions to match the input string against
 * each of the defined lexer rules.
 *
 * @param s The string to match against the lexer rules.
 * @return True if the input matches any rule, otherwise false.
 */
bool Lexer::matchAnyRule(std::string s) {
    for (LexerRule rule : rules) {
        regex re(rule.regex);
        if (regex_match(s, re) && rule.type != -1) {
            return true;
        }
    }
    return false;
}

/**
 * @brief Matches a string to a specific token type based on lexer rules.
 *
 * This function returns the token type of the first rule that matches the
 * given lexeme using regular expressions.
 *
 * @param lexeme The string to match.
 * @return The type of the token matched, or an error type if no match is found.
 */
int Lexer::matchToken(std::string lexeme) {
    for (LexerRule rule : rules) {
        regex re(rule.regex);
        if (regex_match(lexeme, re)) {
            return rule.type;
        }
    }
    // TODO: Error handling: unknown lexeme
    return -1;
}

/**
 * @brief Loads lexer configuration rules.
 *
 * This function initializes the lexer rules with predefined types and regular
 * expressions that will be used for tokenizing input.
 */
void Lexer::loadConfiguration() {
    // Defining lexer rules for different token types
    LexerRule lrIf;
    LexerRule lrLoop;
    LexerRule lrCall;
    LexerRule lrSeq;
    LexerRule lrInsert;
    LexerRule lrRemove;
    LexerRule lrNew;
    LexerRule lrContains;
    LexerRule lrEnd;
    LexerRule lrOParen;
    LexerRule lrCParen;
    LexerRule lrComma;
    LexerRule lrEqual;
    LexerRule lrUnderline;
    LexerRule lrComment;
    LexerRule lrId;
    LexerRule lrError;

    lrIf.type = TOK_IF;
    lrLoop.type = TOK_LOOP;
    lrCall.type = TOK_CALL;
    lrSeq.type = TOK_SEQ;
    lrInsert.type = TOK_INSERT;
    lrRemove.type = TOK_REMOVE;
    lrNew.type = TOK_NEW;
    lrContains.type = TOK_CONTAINS;
    lrEnd.type = TOK_END;
    lrOParen.type = TOK_OPAREN;
    lrCParen.type = TOK_CPAREN;
    lrComma.type = TOK_COMMA;
    lrEqual.type = TOK_EQUAL;
    lrUnderline.type = TOK_UNDERLINE;
    lrComment.type = TOK_COMMENT;
    lrId.type = TOK_ID;
    lrError.type = TOK_ERROR;

    lrIf.regex = "IF";
    lrLoop.regex = "LOOP";
    lrCall.regex = "CALL";
    lrSeq.regex = "SEQ";
    lrInsert.regex = "insert";
    lrRemove.regex = "remove";
    lrNew.regex = "new";
    lrContains.regex = "contains";
    lrEnd.regex = "[;]";
    lrOParen.regex = "[(]";
    lrCParen.regex = "[)]";
    lrComma.regex = "[,]";
    lrEqual.regex = "[=]";
    lrUnderline.regex = "[_]";
    lrComment.regex = "[#]";
    lrId.regex = "[a-zA-Z]+[a-zA-Z0-9]*";
    lrError.regex = ".";

    rules = {
        lrIf, lrLoop, lrCall, lrSeq, lrInsert, lrRemove, lrNew, lrContains, lrEnd,
        lrOParen, lrCParen, lrComma, lrEqual, lrUnderline, lrComment, lrId, lrError};
}

/**
 * @brief Gets the tokens from a given file.
 *
 * This function reads the content of a file and tokenizes each line
 * to generate a vector of tokens.
 *
 * @param fileName The path to the file from which tokens are to be generated.
 * @return A vector of Tokens extracted from the file.
 */
std::vector<Token> Lexer::getTokens(std::string fileName) {
    std::vector<std::string> fileLines = readFile(fileName);  // Reading file lines
    std::vector<Token> tokens = {};                           // Vector to store tokens
    for (auto line : fileLines) {
        std::vector<Token> line_tokens = tokenize(line);
        tokens.insert(tokens.end(), line_tokens.begin(), line_tokens.end());
    }
    return tokens;
}

/**
 * @brief Extracts production rules from a given file.
 *
 * This function reads a file, tokenizes its content, and extracts production
 * rules defined in the file.
 *
 * @param fileName The path to the file containing production rules.
 * @return A vector of ProductionRules extracted from the file.
 */
std::vector<ProductionRule> Lexer::getProductionRules(std::string fileName) {
    std::vector<ProductionRule> productionRules = {};  // Vector to store production rules
    std::vector<Token> tokens = getTokens(fileName);
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i].type == TOK_ID) {
            std::string id = tokens[i].text;
            i++;
            if (tokens[i].type == TOK_EQUAL) {
                i++;
                std::vector<Token> production = {};
                while (tokens[i].type != TOK_END && i < tokens.size()) {
                    production.push_back(tokens[i]);
                    i++;
                }
                ProductionRule rule = {id, production};
                productionRules.push_back(rule);
            } else {
                // TODO: Error handling: unexpected token. expected '='
            }
        } else {
            // TODO: Error handling: unexpected token. expected id
        }
    }
    return productionRules;
}

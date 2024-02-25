#include "parser.h"

void Parser::match(int symbol) {
    if (tokens[tokenIndex].type == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        std::cout << "ERROR PARSING! AT " << tokens[tokenIndex].type << std::endl;
    }
}

std::shared_ptr<Code> Parser::parse_CODE() {
    if (tokens.size() <= tokenIndex) {
        return std::make_shared<Code>(Code());
    }
    switch (tokens[tokenIndex].type) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_NEW:
        case TOK_DEL:
        case TOK_CONTAINS:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_IF:
        case TOK_ID:
            return std::make_shared<Code>(Code(parse_INSTRUCTION(), parse_CODE()));
        case TOK_CPAREN:
        case TOK_COMMA:
            return std::make_shared<Code>(Code());
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING CODE! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Instruction> Parser::parse_INSTRUCTION() {
    switch (tokens[tokenIndex].type) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
            match(tokens[tokenIndex].type);
            return std::make_shared<Instruction>(Instruction(tokens[tokenIndex - 1].type));
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            std::shared_ptr<Instruction> fStruct = std::make_shared<Instruction>(Instruction(tokens[tokenIndex - 2].type, parse_CODE()));
            match(TOK_CPAREN);
            return fStruct;
        }
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            return std::make_shared<Instruction>(Instruction(parse_IFPARAM()));
        case TOK_ID:
            match(TOK_ID);
            return std::make_shared<Instruction>(Instruction(tokens[tokenIndex - 1].text));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING INSTRUCTION! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<IfParam> Parser::parse_IFPARAM() {
    switch (tokens[tokenIndex].type) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID:
        case TOK_COMMA: {
            std::shared_ptr<Code> code = parse_CODE();
            match(TOK_COMMA);
            return std::make_shared<IfParam>(IfParam(code, parse_ELSE()));
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
            match(TOK_COMMA);
            return std::make_shared<IfParam>(IfParam(parse_ELSE()));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING IFPARAM! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Else> Parser::parse_ELSE() {
    switch (tokens[tokenIndex].type) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID:
        case TOK_CPAREN: {
            std::shared_ptr<Code> code = parse_CODE();
            match(TOK_CPAREN);
            return std::make_shared<Else>(Else(code));
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
            match(TOK_CPAREN);
            return std::make_shared<Else>(Else());
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING ELSE! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

void Parser::setTokens(std::vector<Token> _tokens) {
    tokens = _tokens;
}

void Parser::parse() {
    AST = parse_CODE();
}

std::shared_ptr<Code> Parser::getAST() {
    return std::move(AST);
}

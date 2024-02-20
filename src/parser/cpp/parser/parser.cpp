#include "parser.h"

void Parser::match(int symbol) {
    if (std::get<0>(tokens[tokenIndex]) == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
    }
}

std::shared_ptr<S> Parser::parse_S() {
    tokenIndex = 0;
    switch (std::get<0>(tokens[tokenIndex])) {
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
            return std::make_shared<S>(S(parse_CODE()));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Code> Parser::parse_CODE() {
    switch (std::get<0>(tokens[tokenIndex])) {
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
            return std::make_shared<Code>(Code(parse_STRUCT(), parse_STRUCTS()));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Structs> Parser::parse_STRUCTS() {
    if (tokenIndex == tokens.size()) {
        return std::make_shared<LambdaStructs>(LambdaStructs());
    }
    switch (std::get<0>(tokens[tokenIndex])) {
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
            return std::make_shared<StructStructs>(StructStructs(parse_STRUCT(), parse_STRUCTS()));
        case TOK_COMMA:
        case TOK_CPAREN:
            return std::make_shared<LambdaStructs>(LambdaStructs());
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Struct> Parser::parse_STRUCT() {
    switch (std::get<0>(tokens[tokenIndex])) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
            match(std::get<0>(tokens[tokenIndex]));
            return std::make_shared<AllocationStruct>(AllocationStruct(std::get<0>(tokens[tokenIndex - 1])));
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ: {
            match(std::get<0>(tokens[tokenIndex]));
            match(TOK_OPAREN);
            std::shared_ptr<FunctionalStruct> fStruct = std::make_shared<FunctionalStruct>(FunctionalStruct(std::get<0>(tokens[tokenIndex - 2]), parse_STRUCTS()));
            match(TOK_CPAREN);
            return fStruct;
        }
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            return std::make_shared<IfStruct>(IfStruct(parse_PARAMIF()));
        case TOK_ID:
            match(TOK_ID);
            return std::make_shared<IdStruct>(IdStruct(std::get<1>(tokens[tokenIndex - 1])));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<ParamIf> Parser::parse_PARAMIF() {
    switch (std::get<0>(tokens[tokenIndex])) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID: {
            std::shared_ptr<Structs> structs = parse_STRUCTS();
            match(TOK_COMMA);
            return std::make_shared<StructsParamIf>(StructsParamIf(structs, parse_ELSE()));
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_COMMA:
            match(TOK_COMMA);
            return std::make_shared<UnderlineParamIf>(UnderlineParamIf(parse_ELSE()));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Else> Parser::parse_ELSE() {
    switch (std::get<0>(tokens[tokenIndex])) {
        case TOK_IF:
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ:
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
        case TOK_ID: {
            std::shared_ptr<Structs> structs = parse_STRUCTS();
            match(TOK_CPAREN);
            return std::make_shared<StructsElse>(StructsElse(structs));
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_CPAREN:
            match(TOK_CPAREN);
            return std::make_shared<UnderlineElse>(UnderlineElse());
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING! AT " << std::get<0>(tokens[tokenIndex]) << std::endl;
            break;
    }
    return nullptr;
}

void Parser::setTokens(std::vector<token> _tokens) {
    tokens = _tokens;
}

void Parser::parse() {
    AST = parse_S();
}

std::shared_ptr<S> Parser::getAST() {
    return std::move(AST);
}

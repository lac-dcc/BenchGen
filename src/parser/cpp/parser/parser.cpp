#include "parser.h"

void Parser::match(int symbol) {
    if (get<0>(tokens[tokenIndex]) == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
    }
}

shared_ptr<S> Parser::parse_S() {
    tokenIndex = 0;
    switch (get<0>(tokens[tokenIndex])) {
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
            return make_shared<S>(S(parse_CODE()));
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
    return nullptr;
}

shared_ptr<Code> Parser::parse_CODE() {
    switch (get<0>(tokens[tokenIndex])) {
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
            return make_shared<Code>(Code(parse_STRUCT(), parse_STRUCTS()));
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
    return nullptr;
}

shared_ptr<Structs> Parser::parse_STRUCTS() {
    if (tokenIndex == tokens.size()) {
        return make_shared<LambdaStructs>(LambdaStructs());
    }
    switch (get<0>(tokens[tokenIndex])) {
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
            return make_shared<StructStructs>(StructStructs(parse_STRUCT(), parse_STRUCTS()));
        case TOK_COMMA:
        case TOK_CPAREN:
            return make_shared<LambdaStructs>(LambdaStructs());
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
    return nullptr;
}

shared_ptr<Struct> Parser::parse_STRUCT() {
    switch (get<0>(tokens[tokenIndex])) {
        case TOK_INSERT:
        case TOK_REMOVE:
        case TOK_DEL:
        case TOK_NEW:
        case TOK_CONTAINS:
            match(get<0>(tokens[tokenIndex]));
            return make_shared<AllocationStruct>(AllocationStruct(get<0>(tokens[tokenIndex - 1])));
        case TOK_LOOP:
        case TOK_CALL:
        case TOK_SEQ: {
            match(get<0>(tokens[tokenIndex]));
            match(TOK_OPAREN);
            shared_ptr<FunctionalStruct> fStruct = make_shared<FunctionalStruct>(FunctionalStruct(get<0>(tokens[tokenIndex - 2]), parse_STRUCTS()));
            match(TOK_CPAREN);
            return fStruct;
        }
        case TOK_IF:
            match(TOK_IF);
            match(TOK_OPAREN);
            return make_shared<IfStruct>(IfStruct(parse_PARAMIF()));
        case TOK_ID:
            match(TOK_ID);
            return make_shared<IdStruct>(IdStruct(get<1>(tokens[tokenIndex - 1])));
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
    return nullptr;
}

shared_ptr<ParamIf> Parser::parse_PARAMIF() {
    switch (get<0>(tokens[tokenIndex])) {
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
            shared_ptr<Structs> structs = parse_STRUCTS();
            match(TOK_COMMA);
            return make_shared<StructsParamIf>(StructsParamIf(structs, parse_ELSE()));
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_COMMA:
            match(TOK_COMMA);
            return make_shared<UnderlineParamIf>(UnderlineParamIf(parse_ELSE()));
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
    return nullptr;
}

shared_ptr<Else> Parser::parse_ELSE() {
    switch (get<0>(tokens[tokenIndex])) {
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
            shared_ptr<Structs> structs = parse_STRUCTS();
            match(TOK_CPAREN);
            return make_shared<StructsElse>(StructsElse(structs));
        }
        case TOK_UNDERLINE:
            match(TOK_UNDERLINE);
        case TOK_CPAREN:
            match(TOK_CPAREN);
            return make_shared<UnderlineElse>(UnderlineElse());
        default:
            // TODO: Error handling
            cout << "ERROR PARSING! AT " << get<0>(tokens[tokenIndex]) << endl;
            break;
    }
    return nullptr;
}

void Parser::setTokens(vector<token> _tokens) {
    tokens = _tokens;
}

void Parser::parse() {
    AST = parse_S();
}

shared_ptr<S> Parser::getAST() {
    return move(AST);
}
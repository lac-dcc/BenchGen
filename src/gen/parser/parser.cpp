#include "parser.h"

void Parser::match(int symbol) {
    if (tokens[tokenIndex].type == symbol) {
        tokenIndex++;
    } else {
        // TODO: Error handling
        std::cout << "ERROR PARSING! AT " << tokens[tokenIndex].type << std::endl;
    }
}

std::shared_ptr<Node> Parser::parse_CODE() {
    if ((int)tokens.size() <= tokenIndex) {
        return std::make_shared<LambdaCode>(LambdaCode());
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
        case TOK_ID: {
            std::shared_ptr<Node> n = parse_STATEMENT();
            return std::make_shared<StatementCode>(get_statementcode(ProgrammingLanguage::LANGUAGE,n, parse_CODE()));
        }
        case TOK_CPAREN:
        case TOK_COMMA:
            return std::make_shared<LambdaCode>(LambdaCode());
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING CODE! AT " << tokens[tokenIndex].type << std::endl;
            break;
    }
    return nullptr;
}

std::shared_ptr<Node> Parser::parse_STATEMENT() {
    switch (tokens[tokenIndex].type) {
        case TOK_INSERT:
            match(tokens[tokenIndex].type);
            return std::make_shared<Insert>(get_insert(ProgrammingLanguage::LANGUAGE));
        case TOK_REMOVE:
            match(tokens[tokenIndex].type);
            return std::make_shared<Remove>(get_remove(ProgrammingLanguage::LANGUAGE));
        case TOK_NEW:
            match(tokens[tokenIndex].type);
            return std::make_shared<New>(get_new(ProgrammingLanguage::LANGUAGE));
        case TOK_CONTAINS:
            match(tokens[tokenIndex].type);
            return std::make_shared<Contains>(get_contains(ProgrammingLanguage::LANGUAGE));
        case TOK_LOOP: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            std::shared_ptr<Loop> loop = std::make_shared<Loop>(get_loop(ProgrammingLanguage::LANGUAGE, parse_CODE()));
            match(TOK_CPAREN);
            return loop;
        }
        case TOK_CALL: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            match(TOK_CALL_ID);
            int callId = std::stoi(tokens[tokenIndex - 1].text);
            match(TOK_COMMA);
            
            Call call = get_call(ProgrammingLanguage::LANGUAGE);
            currentCall.push(&call);
            std::shared_ptr<Node>  code = parse_CODE();
            call.setId(callId);
            call.setCode(code);
            std::shared_ptr<Call> callPtr = std::make_shared<Call>(call);
            match(TOK_CPAREN);
            currentCall.pop();
            return callPtr;
        }
        case TOK_SEQ: {
            match(tokens[tokenIndex].type);
            match(TOK_OPAREN);
            std::shared_ptr<Seq> seq = std::make_shared<Seq>(get_seq(ProgrammingLanguage::LANGUAGE, parse_CODE()));
            match(TOK_CPAREN);
            return seq;
        }
        case TOK_IF: {
            match(TOK_IF);
            match(TOK_OPAREN);
            
            if (!currentCall.empty()) {
                currentCall.top()->conditionalCounts++;
            }
            std::shared_ptr<Node> c1 = parse_CODE();
            match(TOK_COMMA);
            std::shared_ptr<Node> c2 = parse_CODE();
            match(TOK_CPAREN);
            return std::make_shared<If>(get_if(ProgrammingLanguage::LANGUAGE,c1, c2));
        }
        case TOK_ID:
            match(TOK_ID);
            return std::make_shared<Id>(get_id(ProgrammingLanguage::LANGUAGE, tokens[tokenIndex - 1].text));
        default:
            // TODO: Error handling
            std::cout << "ERROR PARSING INSTRUCTION! AT " << tokens[tokenIndex].type << std::endl;
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

std::shared_ptr<Node> Parser::getAST() {
    return AST;
}

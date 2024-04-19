#include "lSystem.h"

#include <unistd.h>

std::vector<Token> lSystem::lSystem(int iterations, const std::vector<ProductionRule>& productionRules, const std::vector<Token>& inputTokens) {
    std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual> callMap = std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual>();
    int callCounter = 0;

    // Return Variable
    std::list<Token> outputTokens(inputTokens.begin(), inputTokens.end());

    // L-System main loop
    for (int t = 0; t < iterations; t++) {
        // Apply CALL ids to all CALL structure
        for (auto i = outputTokens.begin(); i != outputTokens.end(); i++) {
            int type = i->type;
            int next2Type = std::next(i, 2)->type;

            if (type == TOK_CALL && next2Type != TOK_CALL_ID) {
                int parens = 0;
                std::vector<Token> callTokens = {};
                for (auto j = std::next(i, 2); j != outputTokens.end(); j++) {
                    if (j->type == TOK_OPAREN) {
                        parens++;
                    }
                    if (j->type == TOK_CPAREN) {
                        if (parens == 0) {
                            break;
                        } else {
                            parens--;
                        }
                    }
                    callTokens.push_back(*j);
                }
                int equalCall = findEqualCall(callMap, callTokens);
                std::vector<Token> callIdTokens = {Token(), Token()};
                if (equalCall == -1) {
                    callIdTokens[0].text = std::to_string(callCounter);
                    callMap[callTokens] = callCounter;
                    callCounter++;
                } else {
                    callIdTokens[0].text = std::to_string(equalCall);
                }
                callIdTokens[0].type = TOK_CALL_ID;
                callIdTokens[1].text = ",";
                callIdTokens[1].type = TOK_COMMA;
                std::advance(i, 2);
                outputTokens.insert(i, std::begin(callIdTokens), std::end(callIdTokens));
                std::advance(i, 1);
            }
        }

        // In each loop, seek for production tokens and substitute with production rules.
        for (auto i = outputTokens.begin(); i != outputTokens.end(); i++) {
            if (i->type != PRODUCTION_TOK) continue;

            std::string toSubstitute = i->text;

            // Find equivalent rule index
            int ruleIndex = match(toSubstitute, productionRules);
            if (ruleIndex == -1) {
                std::cerr << "Error: No match of " << toSubstitute << " in production rules.\n";
                exit(1);
            }

            // Pop the token to be substituted.
            i = outputTokens.erase(i);

            // Insert rule into the vector
            outputTokens.insert(i, std::begin(productionRules[ruleIndex].production), std::end(productionRules[ruleIndex].production));
            // Move iterator back for it to iterate ahead again next loop.
            i--;
        }
    }

    std::vector<Token> returnTokens{std::begin(outputTokens), std::end(outputTokens)};

    return returnTokens;
}

int lSystem::match(std::string match, const std::vector<ProductionRule>& rules) {
    int i = 0;
    for (; i < rules.size(); i++) {
        if (match == rules[i].rule) return i;
    }

    return -1;
}

int lSystem::findEqualCall(const std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual>& callMap, const std::vector<Token>& callTokens) {
    if (callMap.find(callTokens) != callMap.end()) {
        return callMap.at(callTokens);
    }
    return -1;
}

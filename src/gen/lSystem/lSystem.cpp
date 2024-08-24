#include "lSystem.h"

#include <unistd.h>

/**
 * @brief Applies L-system rules to generate a sequence of tokens.
 *
 * This function takes an initial set of tokens, applies the specified production rules
 * for a given number of iterations, and generates a new sequence of tokens based on the rules.
 *
 * @param iterations The number of times the production rules should be applied.
 * @param productionRules The production rules to apply, represented as a vector of ProductionRule objects.
 * @param inputTokens The initial vector of Tokens to which the rules are applied.
 * @return A vector of Tokens resulting from applying the production rules to the input.
 */
std::vector<Token> lSystem::lSystem(int iterations, const std::vector<ProductionRule>& productionRules, const std::vector<Token>& inputTokens) {
    int callCounter = 0;  // Counter for tracking call identifiers

    std::list<Token> outputTokens(inputTokens.begin(), inputTokens.end());  // Initialize output tokens with input tokens

    // L-System main loop
    for (int t = 0; t < iterations; t++) {
        applyCallIds(outputTokens, callCounter);              // Apply call IDs to the current output tokens
        applyProductionRules(outputTokens, productionRules);  // Apply production rules to the current output tokens
    }

    applyCallIds(outputTokens, callCounter);  // Final application of call IDs

    std::vector<Token> returnTokens{std::begin(outputTokens), std::end(outputTokens)};  // Convert list to vector

    return returnTokens;
}

/**
 * @brief Matches a string to a production rule.
 *
 * This function searches for a match between a given string and the rules in the provided vector.
 *
 * @param match The string to match against the production rules.
 * @param rules The vector of production rules to search.
 * @return The index of the matching rule, or -1 if no match is found.
 */
int lSystem::match(std::string match, const std::vector<ProductionRule>& rules) {
    int i = 0;
    for (; i < rules.size(); i++) {
        if (match == rules[i].rule) return i;
    }
    return -1;
}

/**
 * @brief Finds an existing call ID for a given set of tokens, if one exists.
 *
 * This function checks if a given sequence of tokens has already been assigned a call ID.
 *
 * @param callMap A map of token sequences to their corresponding call IDs.
 * @param callTokens The vector of tokens representing the call to check.
 * @return The call ID if found, or -1 if no existing call ID is found.
 */
int lSystem::findEqualCall(const std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual>& callMap, const std::vector<Token>& callTokens) {
    if (callMap.find(callTokens) != callMap.end()) {
        return callMap.at(callTokens);
    }
    return -1;
}

/**
 * @brief Applies call IDs to sequences of tokens representing function calls.
 *
 * This function processes the output tokens to assign unique call IDs to sequences
 * representing function calls, ensuring that each unique call sequence has a unique ID.
 *
 * @param outputTokens A list of tokens representing the current state of the output.
 * @param callCounter A reference to the counter used for assigning new call IDs.
 */
void lSystem::applyCallIds(std::list<Token>& outputTokens, int& callCounter) {
    std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual> callMap;  // Map to track call IDs
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
            outputTokens.insert(std::next(i, 2), std::begin(callIdTokens), std::end(callIdTokens));
        }
    }
}

/**
 * @brief Applies production rules to the output tokens.
 *
 * This function replaces tokens in the output that match a production rule with
 * the corresponding production, modifying the output sequence accordingly.
 *
 * @param outputTokens A list of tokens representing the current state of the output.
 * @param productionRules The vector of production rules to apply to the output.
 */
void lSystem::applyProductionRules(std::list<Token>& outputTokens, const std::vector<ProductionRule>& productionRules) {
    for (auto i = outputTokens.begin(); i != outputTokens.end(); i++) {
        if (i->type != PRODUCTION_TOK) continue;

        std::string toSubstitute = i->text;

        int ruleIndex = match(toSubstitute, productionRules);
        if (ruleIndex == -1) {
            std::cerr << "Error: No match of " << toSubstitute << " in production rules.\n";
            exit(1);
        }

        i = outputTokens.erase(i);

        outputTokens.insert(i, std::begin(productionRules[ruleIndex].production), std::end(productionRules[ruleIndex].production));
        i--;
    }
}

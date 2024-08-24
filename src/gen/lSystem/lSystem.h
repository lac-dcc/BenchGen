#ifndef L_SYSTEM
#define L_SYSTEM

#include <iostream>
#include <list>
#include <unordered_map>

#include "../generator/generator.h"
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

#define PRODUCTION_TOK TOK_ID

/**
 * @brief The lSystem namespace contains functions to apply L-system rules
 * to sequences of tokens, including matching rules and applying production rules.
 */
namespace lSystem {

/**
 * @brief Applies L-system rules to generate a sequence of tokens.
 *
 * Takes an initial set of tokens, applies the specified production rules
 * for a given number of iterations, and generates a new sequence of tokens based on the rules.
 *
 * @param iterations The number of times the production rules should be applied.
 * @param productionRules The production rules to apply, represented as a vector of ProductionRule objects.
 * @param inputTokens The initial vector of Tokens to which the rules are applied.
 * @return A vector of Tokens resulting from applying the production rules to the input.
 */
std::vector<Token> lSystem(int iterations, const std::vector<ProductionRule>& productionRules, const std::vector<Token>& inputTokens);

/**
 * @brief Matches a string to a production rule.
 *
 * Searches for a match between a given string and the rules in the provided vector.
 *
 * @param match The string to match against the production rules.
 * @param rules The vector of production rules to search.
 * @return The index of the matching rule, or -1 if no match is found.
 */
int match(std::string match, const std::vector<ProductionRule>& rules);

/**
 * @brief Finds an existing call ID for a given set of tokens, if one exists.
 *
 * Checks if a given sequence of tokens has already been assigned a call ID.
 *
 * @param callMap A map of token sequences to their corresponding call IDs.
 * @param callTokens The vector of tokens representing the call to check.
 * @return The call ID if found, or -1 if no existing call ID is found.
 */
int findEqualCall(const std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual>& callMap, const std::vector<Token>& callTokens);

/**
 * @brief Applies call IDs to sequences of tokens representing function calls.
 *
 * Processes the output tokens to assign unique call IDs to sequences
 * representing function calls, ensuring that each unique call sequence has a unique ID.
 *
 * @param outputTokens A list of tokens representing the current state of the output.
 * @param callCounter A reference to the counter used for assigning new call IDs.
 */
void applyCallIds(std::list<Token>& outputTokens, int& callCounter);

/**
 * @brief Applies production rules to the output tokens.
 *
 * Replaces tokens in the output that match a production rule with
 * the corresponding production, modifying the output sequence accordingly.
 *
 * @param outputTokens A list of tokens representing the current state of the output.
 * @param productionRules The vector of production rules to apply to the output.
 */
void applyProductionRules(std::list<Token>& outputTokens, const std::vector<ProductionRule>& productionRules);

}  // namespace lSystem

#endif

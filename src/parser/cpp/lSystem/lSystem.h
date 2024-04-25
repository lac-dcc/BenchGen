#ifndef L_SYSTEM
#define L_SYSTEM
#include <iostream>
#include <list>
#include <unordered_map>

#include "../generator/generator.h"
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

#define PRODUCTION_TOK TOK_ID

namespace lSystem {
std::vector<Token> lSystem(int, const std::vector<ProductionRule>&, const std::vector<Token>&);
int match(std::string, const std::vector<ProductionRule>&);
int findEqualCall(const std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual>&, const std::vector<Token>&);
void applyCallIds(std::list<Token>&, std::unordered_map<std::vector<Token>, int, TokenVectorHash, TokenVectorEqual>&, int&);
void applyProductionRules(std::list<Token>&, const std::vector<ProductionRule>&);
}  // namespace lSystem

#endif

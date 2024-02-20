#ifndef L_SYSTEM
#define L_SYSTEM
#include <iostream>

#include "../generator/generator.h"
#include "../shared/ast.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

#define PRODUCTION_TOK TOK_ID

namespace lSystem{
	std::vector<Token> lSystem(int, const std::vector<ProductionRule>&, const std::vector<Token>&);
	int match(std::string, const std::vector<ProductionRule>&);
}

#include "lSystem.cpp"

#endif

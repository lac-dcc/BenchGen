#ifndef L_SYSTEM
#define L_SYSTEM
#include <iostream>

#include "../generator/generator.h"
#include "../shared/ast.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

#define PRODUCTION_TOK TOK_ID

namespace lSystem{
	std::vector<token> lSystem(int, const std::vector<production_rule>&, const std::vector<token>&);
	int match(std::string, const std::vector<production_rule>&);
}

#include "lSystem.cpp"

#endif

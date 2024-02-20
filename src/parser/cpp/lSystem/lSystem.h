#ifndef L_SYSTEM
#define L_SYSTEM
#include <iostream>

#include "../generator/generator.h"
#include "../shared/block.h"
#include "../shared/enums.h"
#include "../shared/typedefs.h"

#define PRODUCTION_TOK TOK_ID

namespace lSystem{
	vector<token> lSystem(int, const vector<production_rule>&, const vector<token>&);
	int match(string, const vector<production_rule>&);
}

#include "lSystem.cpp"

#endif

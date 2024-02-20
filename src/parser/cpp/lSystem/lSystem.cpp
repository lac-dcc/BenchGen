#include "lSystem.h"

std::vector<Token> lSystem::lSystem(int iterations, const std::vector<ProductionRule>& productionRules, const std::vector<Token>& inputTokens){
	//Return Variable
	std::vector<Token> outputTokens = inputTokens;
	
	//L-System main loop
	for(int t = 0; t < iterations; t++){
		//In each loop, seek for production tokens and substitute with production rules.
		//To not repeat elements, we walk backwards and add at or to the right of the pointer.
		
		// TODO: outputTokens should be a linked list for improved performance
		for(int i = outputTokens.size() - 1; i >= 0; i--){
			if(outputTokens[i].type != PRODUCTION_TOK) continue; 
			std::string toSubstitute = outputTokens[i].text;

			// Find equivalent rule index
			int ruleIndex = match(toSubstitute, productionRules);
			if(ruleIndex == -1){
				std::cerr << "Error: No match of " << toSubstitute << " in production rules.";
				exit(1);
			}

			// Pop the token to be substituted.
			auto pos = outputTokens.begin() + i;
			outputTokens.erase(pos);

			// Insert rule into the vector
			outputTokens.insert(pos, std::begin(productionRules[ruleIndex].production), std::end(productionRules[ruleIndex].production));
		}
	}

	return outputTokens;
}

int lSystem::match(std::string match, const std::vector<ProductionRule>& rules){
	int i = 0;
	for(; i < rules.size(); i++){
		if(match == rules[i].rule) return i;
	}

	return -1;
}

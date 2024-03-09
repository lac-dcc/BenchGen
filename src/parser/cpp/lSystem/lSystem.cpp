#include "lSystem.h"

#include <unistd.h>

std::vector<Token> lSystem::lSystem(int iterations, const std::vector<ProductionRule>& productionRules, const std::vector<Token>& inputTokens){

	//Return Variable
	std::list<Token> outputTokens(inputTokens.begin(), inputTokens.end());

	//L-System main loop
	for(int t = 0; t < iterations; t++){
		//In each loop, seek for production tokens and substitute with production rules.
		for(auto i = outputTokens.begin(); i != outputTokens.end(); i++){
			if((*i).type != PRODUCTION_TOK) continue; 

			std::string toSubstitute = (*i).text;

			// Find equivalent rule index
			int ruleIndex = match(toSubstitute, productionRules);
			if(ruleIndex == -1){
				std::cerr << "Error: No match of " << toSubstitute << " in production rules.";
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

int lSystem::match(std::string match, const std::vector<ProductionRule>& rules){
	int i = 0;
	for(; i < rules.size(); i++){
		if(match == rules[i].rule) return i;
	}

	return -1;
}

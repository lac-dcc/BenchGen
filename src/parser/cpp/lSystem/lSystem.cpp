#include "lSystem.h"

vector<token> lSystem::lSystem(int iterations, const vector<production_rule>& productionRules, const vector<token>& inputTokens){
	//Return Variable
	vector<token> outputTokens = inputTokens;
	
	//L-System main loop
	for(int t = 0; t < iterations; t++){
		//In each loop, seek for production tokens and substitute with production rules.
		//To not repeat elements, we walk backwards and add at or to the right of the pointer.
		
		// TODO: outputTokens should be a linked list for improved performance
		for(int i = outputTokens.size() - 1; i >= 0; i--){
			if(get<0>(outputTokens[i]) != PRODUCTION_TOK) continue; 
			string toSubstitute = get<1>(outputTokens[i]);

			// Find equivalent rule
			int rule = match(toSubstitute, productionRules);
			if(rule == -1){
				std::cerr << "Error: No match of " << toSubstitute << " in production rules.";
				exit(1);
			}

			// Pop the token to be substituted.
			auto pos = outputTokens.begin() + i;
			outputTokens.erase(pos);

			// Insert rule into the vector
			outputTokens.insert(pos, std::begin(get<1>(productionRules[rule])), std::end(get<1>(productionRules[rule])));
		}
	}

	return outputTokens;
}

int lSystem::match(string match, const vector<production_rule>& rules){
	int i = 0;
	for(; i < rules.size(); i++){
		if(match == get<0>(rules[i])) return i;
	}

	return -1;
}

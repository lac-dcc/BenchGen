#include "lSystem.h"

#include <unistd.h>

std::vector<Token> lSystem::lSystem(int iterations, const std::vector<ProductionRule>& productionRules, const std::vector<Token>& inputTokens){

	//Return Variable
	std::list<Token> outputTokens(inputTokens.begin(), inputTokens.end());

	//L-System main loop
	for(int t = 0; t < iterations; t++){
		//In each loop, seek for production tokens and substitute with production rules.
		//To not repeat elements, we walk backwards and add at or to the right of the pointer.
		std::cout << "ITERATION " << t << "===============================\n";
		
		// TODO: outputTokens should be a linked list for improved performance
		for(auto i = outputTokens.rbegin(); i != outputTokens.rend(); i++){
			/*std::cout << "Got here! " << (*i).text << "\n";
			std::cout << "In list: ";
			for(auto x : outputTokens){
				std::cout << x.text << " ";
			}
			std::cout << "\n";*/
			if((*i).type != PRODUCTION_TOK) continue; 
			std::string toSubstitute = (*i).text;

			// Find equivalent rule index
			int ruleIndex = match(toSubstitute, productionRules);
			if(ruleIndex == -1){
				std::cerr << "Error: No match of " << toSubstitute << " in production rules.";
				exit(1);
			}

			//std::cout << (*i).text << " was a match! \n";

			// Pop the token to be substituted.
			outputTokens.erase(std::next(i).base());
			//std::cout << "Erase successful \n";

			//std::cout << "Test with i = " << (*i).text << "\n";
			i++;
			//std::cout << "Moved to i = " << (*i).text << "\n";
			// Insert rule into the vector
			outputTokens.insert(std::next(i.base()), std::begin(productionRules[ruleIndex].production), std::end(productionRules[ruleIndex].production));
			i--; i--;

			//std::cout << "Ended with i = " << (*i).text << "\n";

			//sleep(1);
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

#include "generatorVariable.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier, bool debugMode) {
    if (type == VarTypes::ARRAY) {
        int size = rand() % 1000;  // Random size for the array
        return new GeneratorArray(size, identifier, debugMode);
    } else if (type == VarTypes::SORTEDLIST) {
        return new GeneratorSortedList(identifier, debugMode);
    }
    // TODO: Error Handling
    return nullptr;
}
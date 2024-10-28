#include "generatorVariable.h"

GeneratorVariable* VariableFactory::createVariable(std::string type, int identifier) {
    if (type == VarTypes::ARRAY) {
        int size = rand() % 1000;  // Random size for the array
        return new GeneratorArray(size, identifier);
    } else if (type == VarTypes::SORTEDLIST) {
        return new GeneratorSortedList(identifier);
    }
    // TODO: Error Handling
    return nullptr;
}
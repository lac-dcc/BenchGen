#ifndef RUSTVARIABLEGENERATOR_H
#define RUSTVARIABLEGENERATOR_H
#include <cstdlib>
#include <memory>
#include <string>

#include "../generatorVariable.h"

/**
 * @brief Class representing an array variable.
 *
 * This class provides methods for operations specific to array variables.
 */
class RustGeneratorArray : public GeneratorArray {
   public:
    int totalSize;  // The total size of the array

    /**
     * @brief Default constructor for the Array class.
     */
    RustGeneratorArray() {};

    /**
     * @brief Constructs an Array with a specified size, values, and identifier.
     *
     * @param totalSize The size of the array.
     * @param id The unique identifier for the array.
     */
    RustGeneratorArray(int totalSize, int id);

    /**
     * @brief Destructor for the Array class.
     */
    ~RustGeneratorArray();

    std::vector<std::string> new_(bool inFunction = false) override;
    std::vector<std::string> insert() override;
    std::vector<std::string> remove() override;
    std::vector<std::string> contains(bool shouldReturn = false) override;
    std::vector<std::string> free() override;
    std::vector<std::string> genIncludes() override;
    std::vector<std::string> genGlobalVars() override;
    std::vector<std::string> genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) override;
};


#endif

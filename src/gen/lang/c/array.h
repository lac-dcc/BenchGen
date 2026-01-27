#ifndef C_ARRAY_H
#define C_ARRAY_H

#include "../../generator/variable.h"

/**
 * @brief Class representing an array variable.
 *
 * This class provides methods for operations specific to array variables.
 */
class CArray : public Variable {
public:
    using Variable::type;
    int totalSize;  // The total size of the array

    /**
     * @brief Default constructor for the Array class.
     */
    CArray() {};

    /**
     * @brief Constructs an Array with a specified size, values, and identifier.
     *
     * @param totalSize The size of the array.
     * @param id The unique identifier for the array.
     */
    CArray(int id, int totalSize = 1000);

    /**
     * @brief Destructor for the Array class.
     */
    ~CArray();

    static vector<string> genIncludes();
    static vector<string> genGlobalVars();
    vector<string> new_(bool = false) override;
    vector<string> insert() override;
    vector<string> remove() override;
    vector<string> contains(bool shouldReturn = false) override;
    vector<string> free() override;
    static vector<string> genParams(string, vector<Variable*>);
};

#endif

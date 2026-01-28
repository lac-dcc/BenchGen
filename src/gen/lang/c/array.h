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

    static string genIncludes();
    static string genGlobalVars();
    string new_(bool = false) override;
    string insert() override;
    string remove() override;
    string contains(bool shouldReturn = false) override;
    string free() override;
    static string genParams(string, vector<Variable*>);
};

#endif

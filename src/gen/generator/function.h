#ifndef FUNCTION_H
#define FUNCTION_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

#include <vector>
#include <string>
using std::vector;
using std::string;

/**
 * @brief The Function class represents a function in the generated code.
 *
 * This class is responsible for managing the lines of code within a function,
 * including adding lines and retrieving them. It also handles function identifiers
 * and determines where to insert new lines based on specific logic.
 */
class Function {
private:
    int id;                // The unique identifier for this function
    vector<string> lines;  // The code that makes up the function
    size_t insert_offset = 0;

public:
    bool isMainFunction = false;

    /**
     * @brief Default constructor for Function.
     *
     * Initializes a new instance of the Function class without setting an ID.
     */
    Function() {}

    /**
     * @brief Constructs a Function with a specific ID.
     *
     * @param id The unique identifier for the function.
     */
    Function(int id, bool main = false) : id(id), isMainFunction(main) {}

    /**
     * @brief Destructor for the Function class.
     *
     * Currently, this destructor does not perform any special operations.
     */
    ~Function() = default;

    void setOffset(size_t offset);

    /**
     * @brief Gets the ID of the generator function.
     *
     * @return The ID of the generator function.
     */
    int getId();

    /**
     * @brief Retrieves the lines of code in the function.
     *
     * @return A vector of strings, each representing a line of code.
     */
    vector<string> getLines();

    /**
     * @brief Adds a single line of code to the generator function.
     *
     * @param line The line of code to add.
     */
    void addLine(string);

    /**
     * @brief Adds multiple lines of code to the function.
     *
     * This method takes a vector of strings, each representing a line of code,
     * and adds them to the function.
     *
     * @param lines A vector of lines of code to add.
     */
    void addLine(vector<string>);
};

#endif

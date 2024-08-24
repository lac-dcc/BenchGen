#ifndef GENERATORFUNCTION_H
#define GENERATORFUNCTION_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

/**
 * @brief The GeneratorFunction class represents a function in the generated code.
 *
 * This class is responsible for managing the lines of code within a function,
 * including adding lines and retrieving them. It also handles function identifiers
 * and determines where to insert new lines based on specific logic.
 */
class GeneratorFunction {
   private:
    int id;                          // The unique identifier for this function
    std::vector<std::string> lines;  // The lines of code that make up the function

   public:
    bool insertBack = false;  // Flag to determine where to insert new lines in the function

    /**
     * @brief Default constructor for GeneratorFunction.
     *
     * Initializes a new instance of the GeneratorFunction class without setting an ID.
     */
    GeneratorFunction() {}

    /**
     * @brief Constructs a GeneratorFunction with a specific ID.
     *
     * @param id The unique identifier for the function.
     */
    GeneratorFunction(int id) : id(id) {}

    /**
     * @brief Destructor for the GeneratorFunction class.
     *
     * Currently, this destructor does not perform any special operations.
     */
    ~GeneratorFunction() = default;

    /**
     * @brief Gets the ID of the generator function.
     *
     * @return The ID of the generator function.
     */
    int getId();

    /**
     * @brief Retrieves the lines of code in the generator function.
     *
     * @return A vector of strings, each representing a line of code.
     */
    std::vector<std::string> getLines();

    /**
     * @brief Adds a single line of code to the generator function.
     *
     * @param line The line of code to add.
     */
    void addLine(std::string);

    /**
     * @brief Adds multiple lines of code to the generator function.
     *
     * This method takes a vector of strings, each representing a line of code,
     * and adds them to the function.
     *
     * @param lines A vector of lines of code to add.
     */
    void addLine(std::vector<std::string>);
};

#endif

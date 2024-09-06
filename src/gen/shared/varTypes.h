#ifndef VARTYPES_H
#define VARTYPES_H

#include "globalIncludes.h"

/**
 * @brief Class that defines various variable types as constants.
 *
 * This class is used to store static constants for different variable types
 * that might be used throughout the application.
 */
class VarTypes {
   public:
    // Constant string representing the "array" variable type
    inline static const std::string ARRAY      = "array";
    inline static const std::string SORTEDLIST = "sortedlist"
};

#endif

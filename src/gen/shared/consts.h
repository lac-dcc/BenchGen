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
    inline static const std::string SORTEDLIST = "sortedlist";
};

class Parameters{
    public:
    inline static int ITERATIONS = -1;
};
class ProgrammingLanguage {
    public:
    
    inline static const std::string C     = "c";
    inline static const std::string CPP   = "cpp";
    inline static const std::string RUST  = "rust";
    inline static const std::string JULIA = "julia";
    inline static const std::string GO    = "go";

    inline static std::string LANGUAGE = "";
};

#endif

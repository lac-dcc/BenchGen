#ifndef GENERATORSCOPE_H
#define GENERATORSCOPE_H
#include "../shared/enums.h"
#include "../shared/globalStructs.h"

struct GeneratorVar {
    std::string letter;
    int number;
};

class GeneratorScope {
private:
    std::vector<std::string> lines = std::vector<std::string>();
    std::list<GeneratorVar> vars = std::list<GeneratorVar>();

public:
    GeneratorScope() {}
    GeneratorScope(std::list<GeneratorVar> parentVars) : vars(parentVars) {}
    ~GeneratorScope() = default;

    std::vector<std::string> getLines();
    std::list<GeneratorVar> getVars();
    void addLine(std::string);
    void addVar(GeneratorVar);
    void addNewVar();
    void insertReturn(int);
};

#endif
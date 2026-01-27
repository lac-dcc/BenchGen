#ifndef C_SORTED_LIST_H
#define C_SORTED_LIST_H

class CSortedList : public Variable {
   public:
    CSortedList() {};

    CSortedList(int id);

    ~CSortedList();

    vector<string> genIncludes();
    vector<string> genGlobalVars();
    vector<string> new_(bool inFunction = false) override;
    vector<string> insert() override;
    vector<string> remove() override;
    vector<string> contains(bool shouldReturn = false) override;
    vector<string> free() override;
    vector<string> genParams(string paramName, vector<Variable*> varsParams) override;
};

#endfi

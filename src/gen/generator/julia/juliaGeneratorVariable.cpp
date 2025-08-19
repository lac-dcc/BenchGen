#include "juliaGeneratorVariable.h"

// ARRAY

JuliaGeneratorArray::JuliaGeneratorArray(int size, int id) {
    this->typeString = "Array";
    this->totalSize = size;
    this->id = id;
    this->name = VarTypes::ARRAY + std::to_string(id);
}

std::vector<std::string> JuliaGeneratorArray::new_(bool inFunction) {
    std::vector<std::string> temp = {};
    if (inFunction) {
       temp.push_back("let mut "+this->name+".data = Array::new_infunction(&mut vars, &mut counter,"+std::to_string(this->totalSize)+","+this->name + "->id);");
    } else {
       temp.push_back("let mut "+this->name+".data = Array::new_outfunc("+std::to_string(this->totalSize)+","+this->name + "->id);");
    }
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::insert() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".insert();");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::remove() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".remove();");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::contains(bool shouldReturn) {
    int compare = rand() % 100;  // Random value to compare against
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".contains("+std::to_string(compare)+",true);");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::free() {
    std::vector<std::string> temp = {};
    temp.push_back(this->name + ".free();");
    return temp;
}

std::vector<std::string> JuliaGeneratorArray::genIncludes() {
    return {};
}

std::vector<std::string> JuliaGeneratorArray::genGlobalVars() {
    std::vector<std::string> temp = {};
    temp.push_back("pub struct "+this->typeString+" {");
    temp.push_back("    pub data: Vec<u32>,");
    temp.push_back("    pub refc: usize,");
    temp.push_back("    pub id: i32,");
    temp.push_back("}\n");
    temp.push_back("pub struct "+this->typeString+"_param {");
    temp.push_back("    pub data: Vec<"+this->typeString+">,");
    temp.push_back("}\n\n");

    temp.push_back("impl Array {");
    temp.push_back("    fn free(&mut self) {");
    temp.push_back("        if self.refc > 0 {");
    temp.push_back("            self.refc -= 1;");
    temp.push_back("        }\n");
    temp.push_back("        if self.refc == 0 {");
    temp.push_back("            debug_free(self.id);");
    temp.push_back("        }");
    temp.push_back("    }\n");
    temp.push_back("    fn contains(&mut self, compare: i32, should_return: bool) -> Option<&Self> {");
    temp.push_back("        for i in 0..self.data.len() {");
    temp.push_back("            if self.data[i] == compare {");
    temp.push_back("                if should_return {");
    temp.push_back("                    return Some(self);");
    temp.push_back("                } else {");
    temp.push_back("                    self.data[i] += compare;");
    temp.push_back("                }");
    temp.push_back("            }");
    temp.push_back("        }");
    temp.push_back("        None");
    temp.push_back("    }\n");
    temp.push_back("    fn remove(&mut self) {");
    temp.push_back("        for val in &mut self.data {");
    temp.push_back("            *val -= 1;");
    temp.push_back("        }");
    temp.push_back("    }\n");
    temp.push_back("    fn insert(&mut self) {");
    temp.push_back("        for val in &mut self.data {");
    temp.push_back("            *val += 1;");
    temp.push_back("        }");
    temp.push_back("    }\n");
    temp.push_back("    fn new_infunction(vars: &mut Vars, p_counter: &mut usize, total_size: usize, id: usize) -> Box<Array> {");
    temp.push_back("        if *p_counter > 0 {");
    temp.push_back("            *p_counter -= 1;");
    temp.push_back("            let mut obj = vars.data.remove(*p_counter);");
    temp.push_back("            obj.refc += 1;");
    temp.push_back("            debug_copy(obj.id);");
    temp.push_back("            obj");
    temp.push_back("        } else {");
    temp.push_back("            let obj = Box::new(Array {");
    temp.push_back("                size: total_size,");
    temp.push_back("                refc: 1,");
    temp.push_back("                id,");
    temp.push_back("                data: vec![0; total_size],");
    temp.push_back("            });");
    temp.push_back("            debug_new(obj.id);");
    temp.push_back("            obj");
    temp.push_back("        }");
    temp.push_back("    }\n");
    temp.push_back("    fn new_outfunc(total_size: usize, id: usize) -> Self {");
    temp.push_back("           let obj = Array {");
    temp.push_back("               size: total_size,");
    temp.push_back("               refc: 1,");
    temp.push_back("               id,");
    temp.push_back("               data: vec![0; total_size],");
    temp.push_back("           };\n");
    temp.push_back("            debug_new(obj.id);");
    temp.push_back("            obj");
    temp.push_back("    }\n");
    temp.push_back("}\n");

    return temp;
}

std::vector<std::string> JuliaGeneratorArray::genParams(std::string paramName, std::vector<GeneratorVariable*> varsParams) {
    std::vector<std::string> temp = {};

    temp.push_back("let mut "+paramName+".data = Array_param { data: Vec::with_capacity("+std::to_string(varsParams.size())+"), };");

    for (int i = 0; i < (int)varsParams.size(); i++) {
        temp.push_back(paramName+".data.push("+varsParams[i]->name+");");
    }
    return temp;
}

JuliaGeneratorArray::~JuliaGeneratorArray() {
}
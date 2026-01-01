#include <iostream>
#include <map>
#include <string>
#include <vector>

inline void log_syntax(const std::string& rule) {
    std::cout << "\t---> Sintaxa recunoscuta: " << rule << std::endl;
}

struct Symbol {
    std::string name;
    std::string type;
    std::string category;
};

class SymbolTable {
private:
    std::map<std::string, Symbol> symbols;
    SymbolTable* parent;
    std::string scopeName;

public:
    SymbolTable(SymbolTable* p, std::string name) {
        this->parent = p;
        this->scopeName = name;
    }

    bool insert(const std::string& name, const std::string& type, const std::string& category) {
        if (symbols.find(name) != symbols.end()) {
            return false; 
        }
        symbols[name] = {name, type, category};
        return true;
    }

    Symbol* lookup(const std::string& name) {
        if (symbols.find(name) != symbols.end()) {
            return &symbols[name];
        }
        if (parent != nullptr) {
            return parent->lookup(name);
        }
        return nullptr;
    }
};
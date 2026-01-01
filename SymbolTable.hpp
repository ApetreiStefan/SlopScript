#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

void yyerror(const char *s);

inline void log_syntax(const std::string& rule) {
    std::cout << "\t---> Sintaxa recunoscuta: " << rule << std::endl;
}

// Structura pentru a retine informatii detaliate despre un simbol
struct Symbol {
    std::string name;
    std::string type;      // int, float, bool, string sau numele unei clase
    std::string category;  // variable, function, parameter, field, class
    
    // Pentru functii/metode: lista tipurilor parametrilor pentru verificare la apel
    std::vector<std::string> paramTypes;
    
    // Pentru clase: pointer catre tabelul de simboluri al clasei (pentru acces la campuri/metode)
    class SymbolTable* classScope;

    Symbol() : name(""), type(""), category(""), classScope(nullptr) {}
};

class SymbolTable {
private:
    std::map<std::string, Symbol> symbols;
    SymbolTable* parent;
    std::string scopeName;

public:
    // Retinem copiii pentru a putea printa toata ierarhia la final in tables.txt
    std::vector<SymbolTable*> children;

    SymbolTable(SymbolTable* p, std::string name) : parent(p), scopeName(name) {
        if (p != nullptr) {
            p->children.push_back(this);
        }
    }

    // Inserare simbol cu verificare de duplicat
    bool insert(const std::string& name, const std::string& type, const std::string& category, 
                std::vector<std::string> params = {}, SymbolTable* cScope = nullptr) {
        if (symbols.find(name) != symbols.end()) {
            return false; // Eroare: Deja definit in scope-ul curent
        }
        
        Symbol s;
        s.name = name;
        s.type = type;
        s.category = category;
        s.paramTypes = params;
        s.classScope = cScope;
        
        symbols[name] = s;
        return true;
    }

    // Cautare recursiva (urca in parinti daca nu gaseste local)
    Symbol* lookup(const std::string& name) {
        if (symbols.find(name) != symbols.end()) {
            return &symbols[name];
        }
        if (parent != nullptr) {
            return parent->lookup(name);
        }
        return nullptr;
    }

    // Cautare stricta (doar in scope-ul curent, util pentru campuri de clasa)
    Symbol* lookupStrict(const std::string& name) {
        if (symbols.find(name) != symbols.end()) {
            return &symbols[name];
        }
        return nullptr;
    }

    SymbolTable* getParent() const { return parent; }
    std::string getName() const { return scopeName; }

    // Generarea fisierului tables.txt conform cerintei
    void printTable(std::ofstream& out) {
        out << "\n" << std::string(50, '=') << "\n";
        out << "SCOPE: " << scopeName << " | PARENT: " << (parent ? parent->scopeName : "None") << "\n";
        out << std::string(50, '-') << "\n";
        out << "Name|Category|Type|Extra Info\n";
        out << std::string(50, '-') << "\n";

        for (auto const& [name, sym] : symbols) {
            out << sym.name << "|" << sym.category << "|" << sym.type << "|";
            
            if (sym.category == "function" || sym.category == "method") {
                out << "Params: (";
                for (size_t i = 0; i < sym.paramTypes.size(); ++i) {
                    out << sym.paramTypes[i] << (i == sym.paramTypes.size() - 1 ? "" : ", ");
                }
                out << ")";
            }
            out << "\n";
        }

        // Printare recursiva pentru toti copiii (sub-scope-uri)
        for (auto child : children) {
            child->printTable(out);
        }
    }
};

SymbolTable* globalTable = new SymbolTable(nullptr, "global");
SymbolTable* currentTable = globalTable;

void printAllTables() {
    std::ofstream out("tables.txt");
    if (out.is_open()) {
        globalTable->printTable(out);
        out.close();
        std::cout << "Tabelele de simboluri au fost salvate in tables.txt" << std::endl;
    } else {
        std::cerr << "Eroare la deschiderea fisierului tables.txt" << std::endl;
    }
}

std::map<std::string, SymbolTable*> classScopes;

void checkTypes(std::string t1, std::string t2, std::string op) {
    if (t1 != t2) {
        std::string msg = "Tipuri incompatibile pentru " + op + " (" + t1 + " si " + t2 + ")";
        yyerror(msg.c_str());
        exit(1);
    }
}
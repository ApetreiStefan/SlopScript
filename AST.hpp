#pragma once
#include <string>
#include <vector>
#include <variant>
#include <iostream>

// Wrapper pentru valori (cerinta IV.1.b)
struct ValueWrapper {
    std::string type;
    std::variant<int, float, bool, std::string> val;

    ValueWrapper() : type("void") {}
    ValueWrapper(int v) : type("int"), val(v) {}
    ValueWrapper(float v) : type("float"), val(v) {}
    ValueWrapper(bool v) : type("bool"), val(v) {}
    ValueWrapper(std::string v, std::string t) : type(t), val(v) {}
};

class ASTNode {
public:
    std::string label;   // operator (+, :=), literal (5), ID (x)
    std::string nodeType; // int, float, etc.
    ASTNode *left, *right;

    ASTNode(std::string l, std::string nt, ASTNode* L = nullptr, ASTNode* R = nullptr)
        : label(l), nodeType(nt), left(L), right(R) {}

        ValueWrapper evaluate(class SymbolTable* table) {
            if (!this) return ValueWrapper();
    
            // Evaluare Atribuire (LHS := RHS)
            if (label == ":=") {
                ValueWrapper res = right->evaluate(table);
                // Aici s-ar face salvarea valorii în SymbolTable
                return res;
            }
    
            // Evaluare Print (Afișează valoarea calculată)
            if (label == "Print") {
                ValueWrapper res = left->evaluate(table);
                std::cout << "[PROGRAM OUTPUT]: ";
                if (res.type == "int") std::cout << std::get<int>(res.val);
                else if (res.type == "float") std::cout << std::get<float>(res.val);
                else if (res.type == "bool") std::cout << (std::get<bool>(res.val) ? "true" : "false");
                else if (res.type == "string") std::cout << std::get<std::string>(res.val);
                std::cout << std::endl;
                return res;
            }
    
            // Noduri Frunză (Literale sau Identificatori)
            if (!left && !right) {
                // Verificăm dacă este un literal numeric
                if (isdigit(label[0])) {
                    if (nodeType == "int") return ValueWrapper(std::stoi(label));
                    if (nodeType == "float") return ValueWrapper(std::stof(label));
                }
                // Dacă este identificator, în mod normal returnăm valoarea din tabel
                // Pentru acest test, returnăm o valoare default 0 dacă nu e literal
                return (nodeType == "float" ? ValueWrapper(0.0f) : ValueWrapper(0)); 
            }
    
            // Evaluare recursivă subarbori
            ValueWrapper lVal = left->evaluate(table);
            ValueWrapper rVal = right->evaluate(table);
    
            // Operatori aritmetici
            if (label == "+") {
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) + std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) + std::get<float>(rVal.val));
            }
            if (label == "-") {
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) - std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) - std::get<float>(rVal.val));
            }
            if (label == "*") {
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) * std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) * std::get<float>(rVal.val));
            }
            if (label == "/") {
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) / std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) / std::get<float>(rVal.val));
            }
    
            return ValueWrapper();
        }
};
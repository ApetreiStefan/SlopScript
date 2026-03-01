#pragma once
#include <string>
#include <vector>
#include <variant>
#include <iostream>

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
    std::string label; 
    std::string nodeType; 
    ASTNode *left, *right;

    ASTNode(std::string l, std::string nt, ASTNode* L = nullptr, ASTNode* R = nullptr)
        : label(l), nodeType(nt), left(L), right(R) {}

        ValueWrapper evaluate(class SymbolTable* table) {
            if (!this) return ValueWrapper();
    
            if (label == ":=") {
                ValueWrapper res = right->evaluate(table);
                return res;
            }

            if (label == "Print") {
                ValueWrapper res = left->evaluate(table);
                std::cout << "\t[PRINT OUTPUT]: ";
                if (res.type == "int") std::cout << std::get<int>(res.val);
                else if (res.type == "float") std::cout << std::get<float>(res.val);
                else if (res.type == "bool") std::cout << (std::get<bool>(res.val) ? "true" : "false" );
                else if (res.type == "string") std::cout << std::get<std::string>(res.val);
                std::cout << std::endl;
                return res;
            }
    
            if (!left && !right) {
  
                if (isdigit(label[0])) {
                    if (nodeType == "int") return ValueWrapper(std::stoi(label));
                    if (nodeType == "float") return ValueWrapper(std::stof(label));
                    if (nodeType == "bool") return ValueWrapper(std::stoi(label));
                }

                return (nodeType == "float" ? ValueWrapper(0.0f) : ValueWrapper(0));
            }
    
            ValueWrapper lVal = left->evaluate(table);
            ValueWrapper rVal = right->evaluate(table);
    
            if (label == "+") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) + std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) + std::get<float>(rVal.val));
            }
            if (label == "-") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) - std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) - std::get<float>(rVal.val));
            }
            if (label == "*") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) * std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) * std::get<float>(rVal.val));
            }
            if (label == "/") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "int") return ValueWrapper(std::get<int>(lVal.val) / std::get<int>(rVal.val));
                return ValueWrapper(std::get<float>(lVal.val) / std::get<float>(rVal.val));
            }

            
            if (label == "<") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "bool" && lVal.nodeType == "float");
                if (nodeType == "bool") return ValueWrapper(std::get<int>(lVal.val) < std::get<int>(rVal.val));
                throw std::runtime_error("Ceva e fishy la expresias booleana.");
            }
            if (label == ">") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "bool") return ValueWrapper(std::get<int>(lVal.val) > std::get<int>(rVal.val));
                throw std::runtime_error("Ceva e fishy la expresias booleana.");
            }
            if (label == "==") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "bool") return ValueWrapper(std::get<int>(lVal.val) == std::get<int>(rVal.val));
                throw std::runtime_error("Ceva e fishy la expresias booleana.");
            }
            if (label == "!=") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "bool") return ValueWrapper(std::get<int>(lVal.val) != std::get<int>(rVal.val));
                throw std::runtime_error("Ceva e fishy la expresias booleana.");
            }
            if (label == "&&") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "bool") return ValueWrapper(std::get<bool>(lVal.val) && std::get<bool>(rVal.val));
                throw std::runtime_error("Ceva e fishy la expresias booleana.");
            }
            if (label == "||") {
                if (lVal.type != rVal.type) {
                    throw std::runtime_error("Executie oprita: Incompatibilitate de tip la calcul.");
                }
                if (nodeType == "bool") return ValueWrapper(std::get<bool>(lVal.val) || std::get<bool>(rVal.val));
                throw std::runtime_error("Ceva e fishy la expresias booleana.");
            }
    
            return ValueWrapper();
        }
};
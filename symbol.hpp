// Symbol.hpp
#include <string>
#include <iostream>

// Structura pentru a stoca rezultatul expresiilor (simplificat pentru demo sintactic)
struct ExpressionValue {
    // În faza de sintaxă, stocăm doar tipul (string/int/float) și valoarea sa ca string
    std::string type;
    std::string value;

    ExpressionValue() : type("void"), value("") {}
    ExpressionValue(const std::string& t, const std::string& v) : type(t), value(v) {}

    void print() const {
        std::cout << "[" << type << ": " << value << "] ";
    }
};

// Funcție de ajutor pentru a afișa când o structură sintactică este recunoscută
inline void log_syntax(const std::string& rule) {
    std::cout << "\t---> Sintaxa recunoscuta: " << rule << std::endl;
}
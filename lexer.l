// lexer.l

%{
// Includeri
#include <iostream>
#include <cstdlib>
#include "parser.tab.hpp" // Header generat de Bison (contine yydefinis si %union)

// Variabile si Functii Externe
extern int yylineno;
extern YYSTYPE yylval; // yylval este structura de tip %union

// Functie de curatare a stringului (pentru a elimina ghilimelele)
std::string clean_string(const char* s) {
    std::string str(s);
    if (str.length() >= 2 && str.front() == '"' && str.back() == '"') {
        return str.substr(1, str.length() - 2);
    }
    return str;
}
%}

// Definitii de Expresii Regulate
digit   [0-9]
letter  [a-zA-Z]
id      {letter}({letter}|{digit}|_)*

%%
// -----------------------------------------------------
// Reguli de Recunoastere a Jetoanelor
// -----------------------------------------------------

// Cuvinte Cheie - RETURNAM TIPUL DE JETON
"int"       { return INT_TYPE; }
"float"     { return FLOAT_TYPE; }
"string"    { return STRING_TYPE; }
"bool"      { return BOOL_TYPE; }
"class"     { return CLASS_KEY; }
"if"        { return IF_KEY; }
"else"      { return ELSE_KEY; }
"while"     { return WHILE_KEY; }
"return"    { return RETURN_KEY; }
"void"      { return VOID_TYPE; }
"main"      { return MAIN_KEY; }
"Print"     { return PRINT_CALL; }

// Literali Booleeni
"true"      { return BOOL_LITERAL; }
"false"     { return BOOL_LITERAL; }

// Operatori
"="         { return ASSIGN; }
"+"         { return OP_ADD; }
"-"         { return OP_SUB; }
"*"         { return OP_MUL; }
"/"         { return OP_DIV; }
"<"         { return OP_LT; }
">"         { return OP_GT; }
"=="        { return OP_EQ; }
"!="        { return OP_NEQ; }
"&&"        { return OP_AND; }
"||"        { return OP_OR; }
"."         { return DOT; }

// Delimitatori
";"         { return SEMICOLON; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
","         { return COMMA; }

// Literali Numerici
{digit}+    { yylval.intVal = atoi(yytext); return INTEGER_LITERAL; }
{digit}*"."{digit}+([Ee][+-]?{digit}+)? { yylval.floatVal = atof(yytext); return FLOAT_LITERAL; }

// Literal Șir
\"(\\.|[^\\"])*\" {
    // Alocam memorie pentru string-ul curatat
    yylval.strVal = new std::string(clean_string(yytext));
    return STRING_LITERAL;
}

// Identificatori
{id}        {
    // Alocam memorie pentru identificator
    yylval.strVal = new std::string(yytext);
    return IDENTIFIER;
}

// Spații Albe și Linii Noi
[ \t\r]+    { /* Ignora */ }
\n          { yylineno++; }

// Comentarii C++-style
"//".* { /* Ignora */ }

// Caractere neașteptate
.           {
    std::cerr << "!!! Caracter ilegal la linia " << yylineno << ": '" << yytext << "'" << std::endl;
}

%%
// Functia yywrap (necesara pentru Flex)
int yywrap() {
    return 1;
}
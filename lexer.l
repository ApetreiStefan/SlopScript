%{

#include <iostream>
#include <cstdlib>
#include "parser.tab.hpp"

extern int yylineno;
extern YYSTYPE yylval;

std::string clean_string(const char* s) {
    std::string str(s);
    if (str.length() >= 2 && str.front() == '"' && str.back() == '"') {
        return str.substr(1, str.length() - 2);
    }
    return str;
}
%}

digit   [0-9]
letter  [a-zA-Z]

%%

"int"       { return INT_TYPE; }
"float"     { return FLOAT_TYPE; }
"string"    { return STRING_TYPE; }
"bool"      { return BOOL_TYPE; }
"class"     { return CLASS_KEY; }
"if"        { return IF_KEY; }
"while"     { return WHILE_KEY; }
"return"    { return RETURN_KEY; }
"void"      { return VOID_TYPE; }
"SLOP"      { return MAIN_KEY; }
"Print"     { return PRINT_CALL; }

"true"      { return BOOL_LITERAL; }
"false"     { return BOOL_LITERAL; }

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

";"         { return SEMICOLON; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
","         { return COMMA; }

{digit}+    { yylval.intVal = atoi(yytext); return INTEGER_LITERAL; }
{digit}*"."{digit}+([Ee][+-]?{digit}+)? { yylval.floatVal = atof(yytext); return FLOAT_LITERAL; }

\"(\\.|[^\\"])*\" {

    yylval.strVal = new std::string(clean_string(yytext));
    return STRING_LITERAL;
}

{letter}({letter}|{digit}|_)*        {

    yylval.strVal = new std::string(yytext);
    return IDENTIFIER;
}

[ \t\r]+    { /* Ignora */ }
\n          { yylineno++; }

"//".* { /* Ignora */ }

.           {
    std::cerr << "!!! Caracter ilegal la linia " << yylineno << ": '" << yytext << "'" << std::endl;
}

%%

int yywrap() {
    return 1;
}
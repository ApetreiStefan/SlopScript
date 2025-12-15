// parser.y

%{
#include <iostream>
#include <string>
#include <vector>
#include "Symbol.hpp" // Include definitiile noastre

// Declaratia functiilor externe
extern int yylex();
void yyerror(const char *s);
extern int yylineno; // Variabila Flex pentru numarul liniei
%}

// -----------------------------------------------------
// Definitia Stivei de Valori (Union)
// -----------------------------------------------------

// Aceasta defineste ce tipuri de date pot fi stocate in simbolurile de pe stiva parserului
%union {
    std::string* strVal; // Pentru Identificatori, Literali string
    int intVal;          // Pentru Literali int
    float floatVal;      // Pentru Literali float
    ExpressionValue* exprVal; // Pentru expresii
}

// -----------------------------------------------------
// Definitia Jetoanelor (Tokens) si a Simbolurilor Neterminale
// -----------------------------------------------------

// Cuvinte Cheie
%token <strVal> INT_TYPE FLOAT_TYPE STRING_TYPE BOOL_TYPE CLASS_KEY IF_KEY WHILE_KEY ELSE_KEY
%token <strVal> RETURN_KEY VOID_TYPE MAIN_KEY PRINT_CALL

// Operatori și Simboluri
%token ASSIGN OP_ADD OP_SUB OP_MUL OP_DIV
%token OP_LT OP_GT OP_EQ OP_NEQ OP_AND OP_OR
%token SEMICOLON LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET DOT COMMA

// Literali și Identificatori
%token <strVal> IDENTIFIER
%token <intVal> INTEGER_LITERAL
%token <floatVal> FLOAT_LITERAL
%token <strVal> STRING_LITERAL
%token BOOL_LITERAL

// Tipuri de date asociate Simbolurilor Neterminale
%type <exprVal> expression boolean_expression factor term object_access
%type <strVal> data_type

// -----------------------------------------------------
// Sectiunea de Reguli de Gramatica (Grammar Rules)
// -----------------------------------------------------

%%
// Scop Global
program: global_definitions main_block
       { log_syntax("Program complet recunoscut."); }
       ;

global_definitions: global_definitions class_definition
                  | global_definitions function_definition
                  | /* empty */
                  ;

// *************** Cerinta: Clase (doar in scop global) ***************
class_definition: CLASS_KEY IDENTIFIER LBRACE class_body RBRACE
                { log_syntax("Definitie Clasa: " + *($2) + " recunoscuta."); }
                ;

class_body: class_body field_declaration
          | class_body method_definition
          | /* empty */
          ;

field_declaration: data_type IDENTIFIER SEMICOLON
                 { log_syntax("Declaratie Camp/Field recunoscuta: " + *($1) + " " + *($2)); }
                 ;

method_definition: data_type IDENTIFIER LPAREN parameter_list RPAREN block
                 { log_syntax("Definitie Metoda/Functie recunoscuta: " + *($2)); }
                 | VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN block
                 { log_syntax("Definitie Metoda/Functie VOID recunoscuta: " + *($2)); }
                 ;

// *************** Cerinta: Functii Globale ***************
function_definition: data_type IDENTIFIER LPAREN parameter_list RPAREN block
                   { log_syntax("Definitie Functie recunoscuta: " + *($2)); }
                   | VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN block
                   { log_syntax("Definitie Functie VOID recunoscuta: " + *($2)); }
                   ;

parameter_list: parameter
              | parameter_list COMMA parameter
              | /* empty */
              ;

parameter: data_type IDENTIFIER
         ;

// *************** Cerinta: Blocul Main (doar statements) ***************
main_block: MAIN_KEY LBRACE statement_list RBRACE
          { log_syntax("Blocul Main recunoscut."); }
          ;

// *************** Cerinta: Tipuri de date & acces ***************
data_type: INT_TYPE { $$ = new std::string("int"); }
         | FLOAT_TYPE { $$ = new std::string("float"); }
         | STRING_TYPE { $$ = new std::string("string"); }
         | BOOL_TYPE { $$ = new std::string("bool"); }
         | IDENTIFIER // Nume de clasa pentru obiecte (ex: MyClass)
         ;

// *************** Cerinta: Statements & Blocuri ***************
statement_list: statement_list statement
              | /* empty */
              ;

statement: assignment_statement SEMICOLON
         | function_call_statement SEMICOLON
         | if_statement
         | while_statement
         | block
         | return_statement SEMICOLON
         | local_variable_declaration SEMICOLON // Declaratia de var locala (doar in scope-ul functiei, nu in if/while)
         ;

// Permitem declaratii de variabile locale
local_variable_declaration: data_type IDENTIFIER
                          | data_type IDENTIFIER ASSIGN expression
                          { log_syntax("Declaratie Variabila Locala recunoscuta."); }
                          ;

assignment_statement: IDENTIFIER ASSIGN expression
                    { log_syntax("Assignment simplu recunoscut: " + *($1)); }
                    | object_access ASSIGN expression
                    { log_syntax("Assignment cu Object Access recunoscut."); }
                    ;

// Instructiunea IF
if_statement: IF_KEY LPAREN boolean_expression RPAREN block
            { log_syntax("If statement recunoscut."); }
            | IF_KEY LPAREN boolean_expression RPAREN block ELSE_KEY block
            { log_syntax("If-Else statement recunoscut."); }
            ;

// Instructiunea WHILE
while_statement: WHILE_KEY LPAREN boolean_expression RPAREN block
               { log_syntax("While statement recunoscut."); }
               ;

// Blocul de cod (permite statements, dar nu declaratii/definitii)
block: LBRACE statement_list RBRACE
     { log_syntax("Block recunoscut."); }
     ;

return_statement: RETURN_KEY expression
                { log_syntax("Return cu expresie recunoscut."); }
                | RETURN_KEY
                { log_syntax("Return VOID recunoscut."); }
                ;

// *************** Cerinta: Print & Apel Functii ***************
function_call_statement: IDENTIFIER LPAREN argument_list RPAREN
                       { log_syntax("Apel Functie simpla recunoscut: " + *($1)); }
                       | PRINT_CALL LPAREN expression RPAREN // Functia predefinita Print(expr)
                       { log_syntax("Apel Print(expr) recunoscut."); }
                       | object_access LPAREN argument_list RPAREN // Apel Metoda (obj.method())
                       { log_syntax("Apel Metoda recunoscut."); }
                       ;

argument_list: expression
             | argument_list COMMA expression
             | /* empty */
             ;

// *************** Cerinta: Acces la Obiecte (campuri si metode) ***************
object_access: IDENTIFIER DOT IDENTIFIER // obj.field sau obj.method
             { log_syntax("Object Access (obj.field/method) recunoscut: " + *($1) + "." + *($3)); }
             ;

// *************** Cerinta: Expresii Aritmetice si Booleene ***************

// Expresii Booleene (AND, OR, Comparatii)
boolean_expression: expression OP_LT expression { log_syntax("Expresie Bool: <"); }
                  | expression OP_GT expression { log_syntax("Expresie Bool: >"); }
                  | expression OP_EQ expression { log_syntax("Expresie Bool: =="); }
                  | expression OP_NEQ expression { log_syntax("Expresie Bool: !="); }
                  | boolean_expression OP_AND boolean_expression { log_syntax("Expresie Bool: &&"); }
                  | boolean_expression OP_OR boolean_expression { log_syntax("Expresie Bool: ||"); }
                  | LPAREN boolean_expression RPAREN
                  | BOOL_LITERAL { log_syntax("Expresie Bool: Literal"); }
                  ;

// Expresii Aritmetice (Adunare/Scădere)
expression: expression OP_ADD term { log_syntax("Expresie: +"); }
          | expression OP_SUB term { log_syntax("Expresie: -"); }
          | term
          ;

// Termeni (Inmultire/Impartire)
term: term OP_MUL factor { log_syntax("Expresie: *"); }
    | term OP_DIV factor { log_syntax("Expresie: /"); }
    | factor
    ;

// Factori (Literali, Identificatori, Apeluri, Paranteze)
factor: IDENTIFIER { log_syntax("Expresie: Identificator"); }
      | object_access { log_syntax("Expresie: Acces Obiect"); }
      | INTEGER_LITERAL { log_syntax("Expresie: Literal Int"); }
      | FLOAT_LITERAL { log_syntax("Expresie: Literal Float"); }
      | STRING_LITERAL { log_syntax("Expresie: Literal String"); }
      | function_call_statement { log_syntax("Expresie: Apel Functie"); }
      | LPAREN expression RPAREN
      ;

%%
// -----------------------------------------------------
// Functii de Suport C++
// -----------------------------------------------------

void yyerror(const char *s) {
    std::cerr << "!!! EROARE DE SINTAXA: " << s << " la linia " << yylineno << std::endl;
}
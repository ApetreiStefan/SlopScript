%{
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "SymbolTable.hpp"
#include "AST.hpp" // Presupunem că aici ai clasa ASTNode cu std::cout în evaluate

extern int yylex();
void yyerror(const char *s);
extern int yylineno; 

void finalize_program() {
    printAllTables();
    std::cout << "\n[Sistem] Executie si evaluare AST finalizate." << std::endl;
}
%}

%code requires{
#include <vector>

}

%union {
    std::string* strVal;
    int intVal;
    float floatVal;
    class ASTNode* astPtr; 
    std::vector<std::string>* typeList;
}

%token <strVal> INT_TYPE FLOAT_TYPE STRING_TYPE BOOL_TYPE CLASS_KEY IF_KEY WHILE_KEY
%token <strVal> RETURN_KEY VOID_TYPE MAIN_KEY PRINT_CALL
%token ASSIGN OP_ADD OP_SUB OP_MUL OP_DIV
%token OP_LT OP_GT OP_EQ OP_NEQ OP_AND OP_OR
%token SEMICOLON LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET DOT COMMA
%token <strVal> IDENTIFIER
%token <intVal> INTEGER_LITERAL
%token <floatVal> FLOAT_LITERAL
%token <strVal> STRING_LITERAL
%token BOOL_LITERAL

%type <astPtr> expression boolean_expression factor term object_access function_call_statement assignment_statement
%type <strVal> data_type parameter
%type <typeList> argument_list parameter_list

%nonassoc OP_EQ OP_NEQ OP_LT OP_GT
%left OP_ADD OP_SUB
%left OP_MUL OP_DIV
%left OP_AND
%left OP_OR
%left DOT

%%

program: global_definitions main_block
       { 
           log_syntax("Program complet recunoscut."); 
           finalize_program();
       }
       ;

global_definitions: global_definitions class_definition
                  | global_definitions variable_definition
                  | global_definitions function_definition
                  | /* empty */ 
                  ;

class_definition: CLASS_KEY IDENTIFIER LBRACE {
                    SymbolTable* newScope = new SymbolTable(currentTable, "class_" + *$2);
                    globalTable->insert(*$2, *$2, "class", {}, newScope);
                    classScopes[*$2] = newScope;
                    currentTable = newScope;
                } class_body RBRACE
                { 
                    currentTable = currentTable->getParent();
                    log_syntax("Definitie Clasa: " + *($2) + " recunoscuta."); 
                }
                ;

class_body: class_body field_declaration
          | class_body method_definition
          | /* empty */
          ;

variable_definition: data_type IDENTIFIER SEMICOLON
                   { 
                       log_syntax("Declaratie Variabila recunoscuta: " + *($1) + " " + *($2)); 
                       currentTable->insert(*$2, *$1, "variable");
                   }
                   ;

field_declaration: data_type IDENTIFIER SEMICOLON
                 { 
                     log_syntax("Declaratie Camp/Field recunoscuta: " + *($1) + " " + *($2)); 
                     currentTable->insert(*$2, *$1, "field");
                 }
                 ;

method_definition: data_type IDENTIFIER LPAREN {
                    currentTable = new SymbolTable(currentTable, "method_" + *$2);
                 } parameter_list RPAREN {
                    currentTable->getParent()->insert(*$2, *$1, "method", *$5);
                 } block
                 { 
                    currentTable = currentTable->getParent();
                    log_syntax("Definitie Metoda: " + *($1) + " " + *($2)); 
                 }
                 | VOID_TYPE IDENTIFIER LPAREN {
                    currentTable = new SymbolTable(currentTable, "method_" + *$2);
                 } parameter_list RPAREN {
                    currentTable->getParent()->insert(*$2, "void", "method", *$5);
                 } block
                 { 
                    currentTable = currentTable->getParent();
                    log_syntax("Definitie Metoda VOID recunoscuta: " + *($2)); 
                 }
                 ;

function_definition: data_type IDENTIFIER LPAREN {
                        currentTable = new SymbolTable(currentTable, "func_" + *$2);
                    } parameter_list RPAREN {
                        globalTable->insert(*$2, *$1, "function", *$5);
                    } block
                   { 
                       currentTable = currentTable->getParent();
                       log_syntax("Definitie Functie: " + *($1) + " " + *($2)); 
                   }
                   | VOID_TYPE IDENTIFIER LPAREN {
                        currentTable = new SymbolTable(currentTable, "func_" + *$2);
                    } parameter_list RPAREN {
                        globalTable->insert(*$2, "void", "function", *$5);
                    } block
                   { 
                       currentTable = currentTable->getParent();
                       log_syntax("Definitie Functie VOID recunoscuta: " + *($2)); 
                   }
                   ;

parameter_list: parameter 
              { 
                  $$ = new std::vector<std::string>(); 
                  $$->push_back(*$1); 
              }
              | parameter_list COMMA parameter 
              { 
                  $1->push_back(*$3); 
                  $$ = $1; 
              }
              | /* empty */ 
              { 
                  $$ = new std::vector<std::string>(); 
              }
              ;

parameter: data_type IDENTIFIER
         {
             currentTable->insert(*$2, *$1, "parameter");
             $$ = $1;
         }
         ;

main_block: MAIN_KEY LBRACE {
                currentTable = new SymbolTable(currentTable, "main");
            } no_decl_statement_list RBRACE
          { 
              currentTable = currentTable->getParent(); 
              log_syntax("Blocul Main recunoscut.");
          }
          ;

no_decl_statement_list: no_decl_statement_list no_decl_statement
              | /* empty */
              ;

no_decl_statement: assignment_statement SEMICOLON
         { 
             if($1) $1->evaluate(currentTable); // Evaluare AST pentru orice atribuire (IV.2)
         } 
         | function_call_statement SEMICOLON
         { 
             if($1) $1->evaluate(currentTable); // Evaluare AST pentru apeluri
         }
         | if_statement
         | while_statement
         | block
         | return_statement SEMICOLON
         | PRINT_CALL LPAREN expression RPAREN SEMICOLON
         {
             ASTNode* pNode = new ASTNode("Print", "void", $3);
             pNode->evaluate(currentTable);
             log_syntax("Apel Print(expr) recunoscut.");
         }
         ;

no_decl_block: LBRACE no_decl_statement_list RBRACE 
         { log_syntax("Block recunoscut."); } 
         ;

data_type: INT_TYPE { $$ = new std::string("int"); }
         | FLOAT_TYPE { $$ = new std::string("float"); }
         | STRING_TYPE { $$ = new std::string("string"); }
         | BOOL_TYPE { $$ = new std::string("bool"); }
         | IDENTIFIER { $$ = $1; }
         ;

statement_list: statement_list statement
              | /* empty */
              ;

statement: assignment_statement SEMICOLON { if($1) $1->evaluate(currentTable); }
         | function_call_statement SEMICOLON { if($1) $1->evaluate(currentTable); }
         | if_statement
         | while_statement
         | block
         | return_statement SEMICOLON
         | local_variable_declaration SEMICOLON 
         ;

local_variable_declaration: data_type IDENTIFIER
                          { currentTable->insert(*$2, *$1, "variable"); }
                          | data_type IDENTIFIER ASSIGN expression
                          { 
                              log_syntax("Declaratie Variabila Locala recunoscuta.");
                              currentTable->insert(*$2, *$1, "variable"); 
                              checkTypes(*$1, $4->nodeType, "init"); 
                              $4->evaluate(currentTable); // Evaluare la inițializare
                          }
                          ;

assignment_statement: IDENTIFIER ASSIGN expression
                    { 
                        log_syntax("Assignment simplu recunoscut: " + *($1));
                        Symbol* s = currentTable->lookup(*$1); 
                        checkTypes(s->type, $3->nodeType, "atribuire"); 
                        $$ = new ASTNode(":=", s->type, new ASTNode(*$1, s->type), $3);
                    }
                    | object_access ASSIGN expression
                    { 
                        log_syntax("Assignment cu Object Access recunoscut.");
                        checkTypes($1->nodeType, $3->nodeType, "atribuire obiect"); 
                        $$ = new ASTNode(":=", $1->nodeType, $1, $3);
                    }
                    ;

if_statement: IF_KEY LPAREN boolean_expression RPAREN no_decl_block
            { log_syntax("If statement recunoscut."); }
            ;

while_statement: WHILE_KEY LPAREN boolean_expression RPAREN no_decl_block
               { log_syntax("While statement recunoscut."); }
               ;

block: LBRACE {
            currentTable = new SymbolTable(currentTable, "block_" + std::to_string(yylineno));
        } statement_list RBRACE
     { 
         currentTable = currentTable->getParent(); 
         log_syntax("Block recunoscut."); 
     }
     ;

return_statement: RETURN_KEY expression
                { log_syntax("Return cu expresie recunoscut."); }
                | RETURN_KEY
                { log_syntax("Return VOID recunoscut."); }
                ;

function_call_statement: IDENTIFIER LPAREN argument_list RPAREN
                       { 
                           log_syntax("Apel Functie simpla recunoscut: " + *($1));
                           Symbol* s = currentTable->lookup(*$1); 
                           $$ = new ASTNode("OTHER", (s ? s->type : "void"));
                       }
                       | object_access LPAREN argument_list RPAREN 
                       { 
                           log_syntax("Apel Metoda recunoscut.");
                           $$ = new ASTNode("OTHER", "void");
                       }
                       ;

argument_list: expression 
             { 
                 $$ = new std::vector<std::string>(); 
                 $$->push_back($1->nodeType); 
             }
             | argument_list COMMA expression 
             { 
                 $1->push_back($3->nodeType); 
                 $$ = $1; 
             }
             | /* empty */ 
             { 
                 $$ = new std::vector<std::string>(); 
             }
             ;

object_access: IDENTIFIER DOT IDENTIFIER 
             { 
                 log_syntax("Object Access recunoscut: " + *($1) + "." + *($3));
                 $$ = new ASTNode("OTHER", "int");
             }
             ;

boolean_expression: expression OP_LT expression { $$ = new ASTNode("<", "bool", $1, $3); }
                  | expression OP_GT expression { $$ = new ASTNode(">", "bool", $1, $3); }
                  | expression OP_EQ expression { $$ = new ASTNode("==", "bool", $1, $3); }
                  | expression OP_NEQ expression { $$ = new ASTNode("!=", "bool", $1, $3); }
                  | boolean_expression OP_AND boolean_expression { $$ = new ASTNode("&&", "bool", $1, $3); }
                  | boolean_expression OP_OR boolean_expression { $$ = new ASTNode("||", "bool", $1, $3); }
                  | LPAREN boolean_expression RPAREN { $$ = $2; }
                  | BOOL_LITERAL { $$ = new ASTNode("bool_lit", "bool"); }
                  ;

expression: expression OP_ADD term { $$ = new ASTNode("+", $1->nodeType, $1, $3); }
          | expression OP_SUB term { $$ = new ASTNode("-", $1->nodeType, $1, $3); }
          | term { $$ = $1; }
          ;

term: term OP_MUL factor { $$ = new ASTNode("*", $1->nodeType, $1, $3); }
    | term OP_DIV factor { $$ = new ASTNode("/", $1->nodeType, $1, $3); }
    | factor { $$ = $1; }
    ;

factor: IDENTIFIER 
       { 
            log_syntax("Expresie: Identificator");
            Symbol* s = currentTable->lookup(*$1); 
            $$ = new ASTNode(*$1, (s ? s->type : "int"));
       }
      | object_access { log_syntax("Expresie: Acces Obiect"); $$ = $1; }
      | INTEGER_LITERAL 
      { 
          log_syntax("Expresie: Literal Int"); 
          $$ = new ASTNode(std::to_string($1), "int");
      }
      | FLOAT_LITERAL 
      { 
          log_syntax("Expresie: Literal Float"); 
          $$ = new ASTNode(std::to_string($1), "float"); 
      }
      | function_call_statement { log_syntax("Expresie: Apel Functie"); $$ = $1; }
      | LPAREN expression RPAREN { log_syntax("Factor: Paranteze"); $$ = $2; }
      ;

%%

void yyerror(const char *s) {
    std::cerr << "!!! EROARE la linia " << yylineno << ": " << s << std::endl;
}
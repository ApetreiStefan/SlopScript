/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 24 "parser.y"

    #include <string>
    #include <iostream>

    struct ExpressionValue {
        std::string type;
        std::string value;

        ExpressionValue() : type("void"), value("") {}
        ExpressionValue(const std::string& t, const std::string& v) : type(t), value(v) {}
    };

#line 62 "parser.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_TYPE = 258,                /* INT_TYPE  */
    FLOAT_TYPE = 259,              /* FLOAT_TYPE  */
    STRING_TYPE = 260,             /* STRING_TYPE  */
    BOOL_TYPE = 261,               /* BOOL_TYPE  */
    CLASS_KEY = 262,               /* CLASS_KEY  */
    IF_KEY = 263,                  /* IF_KEY  */
    WHILE_KEY = 264,               /* WHILE_KEY  */
    RETURN_KEY = 265,              /* RETURN_KEY  */
    VOID_TYPE = 266,               /* VOID_TYPE  */
    MAIN_KEY = 267,                /* MAIN_KEY  */
    PRINT_CALL = 268,              /* PRINT_CALL  */
    ASSIGN = 269,                  /* ASSIGN  */
    OP_ADD = 270,                  /* OP_ADD  */
    OP_SUB = 271,                  /* OP_SUB  */
    OP_MUL = 272,                  /* OP_MUL  */
    OP_DIV = 273,                  /* OP_DIV  */
    OP_LT = 274,                   /* OP_LT  */
    OP_GT = 275,                   /* OP_GT  */
    OP_EQ = 276,                   /* OP_EQ  */
    OP_NEQ = 277,                  /* OP_NEQ  */
    OP_AND = 278,                  /* OP_AND  */
    OP_OR = 279,                   /* OP_OR  */
    SEMICOLON = 280,               /* SEMICOLON  */
    LPAREN = 281,                  /* LPAREN  */
    RPAREN = 282,                  /* RPAREN  */
    LBRACE = 283,                  /* LBRACE  */
    RBRACE = 284,                  /* RBRACE  */
    LBRACKET = 285,                /* LBRACKET  */
    RBRACKET = 286,                /* RBRACKET  */
    DOT = 287,                     /* DOT  */
    COMMA = 288,                   /* COMMA  */
    IDENTIFIER = 289,              /* IDENTIFIER  */
    INTEGER_LITERAL = 290,         /* INTEGER_LITERAL  */
    FLOAT_LITERAL = 291,           /* FLOAT_LITERAL  */
    STRING_LITERAL = 292,          /* STRING_LITERAL  */
    BOOL_LITERAL = 293             /* BOOL_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "parser.y"

    std::string* strVal; // Pentru Identificatori, Literali string
    int intVal;          // Pentru Literali int
    float floatVal;      // Pentru Literali float
    ExpressionValue* exprVal; // Pentru expresii

#line 124 "parser.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */

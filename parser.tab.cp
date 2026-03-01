/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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

#line 90 "parser.tab.cp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_TYPE = 3,                   /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 4,                 /* FLOAT_TYPE  */
  YYSYMBOL_STRING_TYPE = 5,                /* STRING_TYPE  */
  YYSYMBOL_BOOL_TYPE = 6,                  /* BOOL_TYPE  */
  YYSYMBOL_CLASS_KEY = 7,                  /* CLASS_KEY  */
  YYSYMBOL_IF_KEY = 8,                     /* IF_KEY  */
  YYSYMBOL_WHILE_KEY = 9,                  /* WHILE_KEY  */
  YYSYMBOL_RETURN_KEY = 10,                /* RETURN_KEY  */
  YYSYMBOL_VOID_TYPE = 11,                 /* VOID_TYPE  */
  YYSYMBOL_MAIN_KEY = 12,                  /* MAIN_KEY  */
  YYSYMBOL_PRINT_CALL = 13,                /* PRINT_CALL  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_OP_ADD = 15,                    /* OP_ADD  */
  YYSYMBOL_OP_SUB = 16,                    /* OP_SUB  */
  YYSYMBOL_OP_MUL = 17,                    /* OP_MUL  */
  YYSYMBOL_OP_DIV = 18,                    /* OP_DIV  */
  YYSYMBOL_OP_LT = 19,                     /* OP_LT  */
  YYSYMBOL_OP_GT = 20,                     /* OP_GT  */
  YYSYMBOL_OP_EQ = 21,                     /* OP_EQ  */
  YYSYMBOL_OP_NEQ = 22,                    /* OP_NEQ  */
  YYSYMBOL_OP_AND = 23,                    /* OP_AND  */
  YYSYMBOL_OP_OR = 24,                     /* OP_OR  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 26,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 28,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 29,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 30,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 31,                  /* RBRACKET  */
  YYSYMBOL_DOT = 32,                       /* DOT  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_IDENTIFIER = 34,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_LITERAL = 35,           /* INTEGER_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 36,             /* FLOAT_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 37,            /* STRING_LITERAL  */
  YYSYMBOL_BOOL_LITERAL = 38,              /* BOOL_LITERAL  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_global_definitions = 41,        /* global_definitions  */
  YYSYMBOL_class_definition = 42,          /* class_definition  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_class_body = 44,                /* class_body  */
  YYSYMBOL_variable_definition = 45,       /* variable_definition  */
  YYSYMBOL_field_declaration = 46,         /* field_declaration  */
  YYSYMBOL_method_definition = 47,         /* method_definition  */
  YYSYMBOL_48_2 = 48,                      /* $@2  */
  YYSYMBOL_49_3 = 49,                      /* $@3  */
  YYSYMBOL_50_4 = 50,                      /* $@4  */
  YYSYMBOL_51_5 = 51,                      /* $@5  */
  YYSYMBOL_function_definition = 52,       /* function_definition  */
  YYSYMBOL_53_6 = 53,                      /* $@6  */
  YYSYMBOL_54_7 = 54,                      /* $@7  */
  YYSYMBOL_55_8 = 55,                      /* $@8  */
  YYSYMBOL_56_9 = 56,                      /* $@9  */
  YYSYMBOL_parameter_list = 57,            /* parameter_list  */
  YYSYMBOL_parameter = 58,                 /* parameter  */
  YYSYMBOL_main_block = 59,                /* main_block  */
  YYSYMBOL_60_10 = 60,                     /* $@10  */
  YYSYMBOL_no_decl_statement_list = 61,    /* no_decl_statement_list  */
  YYSYMBOL_no_decl_statement = 62,         /* no_decl_statement  */
  YYSYMBOL_no_decl_block = 63,             /* no_decl_block  */
  YYSYMBOL_data_type = 64,                 /* data_type  */
  YYSYMBOL_statement_list = 65,            /* statement_list  */
  YYSYMBOL_statement = 66,                 /* statement  */
  YYSYMBOL_local_variable_declaration = 67, /* local_variable_declaration  */
  YYSYMBOL_assignment_statement = 68,      /* assignment_statement  */
  YYSYMBOL_if_statement = 69,              /* if_statement  */
  YYSYMBOL_while_statement = 70,           /* while_statement  */
  YYSYMBOL_block = 71,                     /* block  */
  YYSYMBOL_72_11 = 72,                     /* $@11  */
  YYSYMBOL_return_statement = 73,          /* return_statement  */
  YYSYMBOL_function_call_statement = 74,   /* function_call_statement  */
  YYSYMBOL_argument_list = 75,             /* argument_list  */
  YYSYMBOL_object_access = 76,             /* object_access  */
  YYSYMBOL_boolean_expression = 77,        /* boolean_expression  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_factor = 80                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   194

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    64,    65,    66,    67,    70,    70,    82,
      83,    84,    87,    99,   111,   113,   111,   120,   122,   120,
     131,   133,   131,   140,   142,   140,   151,   156,   162,   167,
     174,   174,   183,   184,   187,   191,   195,   196,   197,   198,
     199,   205,   213,   217,   218,   219,   220,   221,   224,   225,
     228,   229,   230,   231,   232,   233,   234,   237,   244,   258,
     269,   277,   281,   285,   285,   294,   296,   300,   327,   334,
     339,   345,   350,   375,   376,   377,   378,   379,   380,   381,
     382,   385,   386,   387,   390,   391,   392,   395,   401,   402,
     407,   412,   413
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_TYPE",
  "FLOAT_TYPE", "STRING_TYPE", "BOOL_TYPE", "CLASS_KEY", "IF_KEY",
  "WHILE_KEY", "RETURN_KEY", "VOID_TYPE", "MAIN_KEY", "PRINT_CALL",
  "ASSIGN", "OP_ADD", "OP_SUB", "OP_MUL", "OP_DIV", "OP_LT", "OP_GT",
  "OP_EQ", "OP_NEQ", "OP_AND", "OP_OR", "SEMICOLON", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "DOT", "COMMA", "IDENTIFIER",
  "INTEGER_LITERAL", "FLOAT_LITERAL", "STRING_LITERAL", "BOOL_LITERAL",
  "$accept", "program", "global_definitions", "class_definition", "$@1",
  "class_body", "variable_definition", "field_declaration",
  "method_definition", "$@2", "$@3", "$@4", "$@5", "function_definition",
  "$@6", "$@7", "$@8", "$@9", "parameter_list", "parameter", "main_block",
  "$@10", "no_decl_statement_list", "no_decl_statement", "no_decl_block",
  "data_type", "statement_list", "statement", "local_variable_declaration",
  "assignment_statement", "if_statement", "while_statement", "block",
  "$@11", "return_statement", "function_call_statement", "argument_list",
  "object_access", "boolean_expression", "expression", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -77,     7,    55,   -77,   -77,   -77,   -77,   -77,   -20,     6,
       8,   -77,   -77,   -77,   -77,   -77,    15,    23,    27,   -77,
       3,   -77,   -77,   -77,   -77,   -77,   -77,     5,    77,     5,
      67,    19,   -77,    42,    69,    76,    29,    78,   -77,   -77,
      -1,   -77,    88,   -77,   -77,   -77,    92,    96,    -2,    21,
      50,   -77,   -77,   -77,   113,   -77,     5,   -77,   118,   118,
      29,    51,   -77,   -77,   -77,   129,    59,    82,   -77,   118,
     -77,    29,    29,   125,   -77,   -77,   -77,    29,    29,   -77,
     134,   106,   137,   -77,   118,   -77,   122,   142,   143,    18,
      29,    29,    29,    29,   145,   103,    13,    59,    61,    59,
     -77,    59,    64,   137,   -77,   -77,   -77,   -77,   150,   121,
     118,   118,   147,    29,    29,    29,    29,   147,   -77,    82,
      82,   -77,   -77,   146,   151,   -77,    -1,   144,   -77,   154,
     155,   -77,   -77,   -77,   156,   157,   -77,    29,   -77,   -77,
       5,     5,   -77,   159,   -77,   -77,   -77,    59,    59,    59,
      59,   -77,   -77,   -77,   170,   -77,   -77,   -77,   -77,    59,
      83,    93,    99,    29,   -77,   -77,   -77,    59,   137,   137,
     -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,     1,    43,    44,    45,    46,     0,     0,
       0,    47,     3,     4,     5,     2,     0,     0,     0,    30,
       0,     7,    23,    33,    12,    20,    11,    28,     0,    28,
       0,     0,    26,     0,     0,     0,    66,     0,    63,    31,
       0,    32,     0,    36,    37,    38,     0,     0,     0,     0,
       0,     8,     9,    10,     0,    24,     0,    29,     0,     0,
       0,    87,    89,    90,    91,    88,    65,    83,    86,     0,
      49,     0,    71,     0,    34,    39,    35,     0,    71,    21,
       0,     0,     0,    27,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,    69,
      72,    60,     0,     0,    17,    13,    14,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    81,
      82,    84,    85,     0,     0,    64,    47,     0,    48,     0,
       0,    52,    53,    54,     0,     0,    67,     0,    68,    22,
      28,    28,    79,    77,    78,    33,    61,    73,    74,    75,
      76,    62,    41,    40,    57,    56,    50,    55,    51,    70,
       0,     0,     0,     0,    18,    15,    42,    58,     0,     0,
      19,    16
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -26,   130,
     -77,   -77,    40,   -77,    70,     2,   -77,   -77,   -77,    94,
      95,    97,   -76,   -77,    98,   -28,   110,   -27,   -54,   -34,
      48,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    12,    26,    30,    13,    52,    53,   141,
     169,   140,   168,    14,    29,   103,    27,    82,    31,    32,
      15,    23,    28,    41,   146,    33,    96,   128,   129,    42,
      43,    44,    45,    70,    46,    64,    98,    65,    86,    87,
      67,    68
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    48,    66,    49,    16,    88,   107,     3,     4,     5,
       6,     7,    77,    71,    17,    94,     4,     5,     6,     7,
     133,    34,    35,    36,    78,    72,    89,   139,    24,    25,
     108,    73,    54,    90,    91,    95,    19,    97,    99,    11,
      18,    38,   125,   101,    99,   118,    55,   126,    79,    20,
     109,    21,    56,    22,    56,    60,   143,   144,     4,     5,
       6,     7,     8,    61,    62,    63,     9,    10,   135,    48,
       4,     5,     6,     7,    90,    91,    57,    72,    50,   147,
     148,   149,   150,    73,    80,    34,    35,    36,   136,    11,
      37,   138,   170,   171,   137,    58,    51,   137,   127,    92,
      93,    11,    59,   159,    69,    38,    39,    34,    35,    36,
     164,    40,    37,    74,   160,   161,    56,    75,    90,    91,
     165,    76,   113,   114,   115,   116,    56,    38,   166,   167,
     124,   105,   106,    40,    47,    48,    90,    91,   119,   120,
     113,   114,   115,   116,    84,   110,   111,    81,   118,   112,
     121,   122,    61,    62,    63,    78,    85,    90,    91,   100,
     104,   113,   114,   115,   116,    38,   110,   111,   110,   111,
     117,   152,   123,   110,   111,   145,   153,   142,   154,   155,
     156,   157,   158,   111,   163,   162,    83,   151,   102,     0,
     130,   131,     0,   132,   134
};

static const yytype_int16 yycheck[] =
{
      28,    28,    36,    29,     2,    59,    82,     0,     3,     4,
       5,     6,    14,    14,    34,    69,     3,     4,     5,     6,
      96,     8,     9,    10,    26,    26,    60,   103,    25,    26,
      84,    32,    30,    15,    16,    69,    28,    71,    72,    34,
      34,    28,    29,    77,    78,    27,    27,    34,    27,    34,
      84,    28,    33,    26,    33,    26,   110,   111,     3,     4,
       5,     6,     7,    34,    35,    36,    11,    12,    96,    96,
       3,     4,     5,     6,    15,    16,    34,    26,    11,   113,
     114,   115,   116,    32,    34,     8,     9,    10,    27,    34,
      13,    27,   168,   169,    33,    26,    29,    33,    96,    17,
      18,    34,    26,   137,    26,    28,    29,     8,     9,    10,
      27,    34,    13,    25,   140,   141,    33,    25,    15,    16,
      27,    25,    19,    20,    21,    22,    33,    28,    29,   163,
      27,    25,    26,    34,   162,   162,    15,    16,    90,    91,
      19,    20,    21,    22,    26,    23,    24,    34,    27,    27,
      92,    93,    34,    35,    36,    26,    38,    15,    16,    34,
      26,    19,    20,    21,    22,    28,    23,    24,    23,    24,
      27,    25,    27,    23,    24,    28,    25,    27,    34,    25,
      25,    25,    25,    24,    14,   145,    56,   117,    78,    -1,
      96,    96,    -1,    96,    96
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    41,     0,     3,     4,     5,     6,     7,    11,
      12,    34,    42,    45,    52,    59,    64,    34,    34,    28,
      34,    28,    26,    60,    25,    26,    43,    55,    61,    53,
      44,    57,    58,    64,     8,     9,    10,    13,    28,    29,
      34,    62,    68,    69,    70,    71,    73,    74,    76,    57,
      11,    29,    46,    47,    64,    27,    33,    34,    26,    26,
      26,    34,    35,    36,    74,    76,    78,    79,    80,    26,
      72,    14,    26,    32,    25,    25,    25,    14,    26,    27,
      34,    34,    56,    58,    26,    38,    77,    78,    77,    78,
      15,    16,    17,    18,    77,    78,    65,    78,    75,    78,
      34,    78,    75,    54,    26,    25,    26,    71,    77,    78,
      23,    24,    27,    19,    20,    21,    22,    27,    27,    79,
      79,    80,    80,    27,    27,    29,    34,    64,    66,    67,
      68,    69,    70,    71,    73,    74,    27,    33,    27,    71,
      50,    48,    27,    77,    77,    28,    63,    78,    78,    78,
      78,    63,    25,    25,    34,    25,    25,    25,    25,    78,
      57,    57,    61,    14,    27,    27,    29,    78,    51,    49,
      71,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    43,    42,    44,
      44,    44,    45,    46,    48,    49,    47,    50,    51,    47,
      53,    54,    52,    55,    56,    52,    57,    57,    57,    58,
      60,    59,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    64,    64,    64,    64,    64,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    68,
      68,    69,    70,    72,    71,    73,    73,    74,    74,    75,
      75,    75,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    79,    80,    80,    80,
      80,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     0,     0,     6,     2,
       2,     0,     3,     3,     0,     0,     8,     0,     0,     8,
       0,     0,     8,     0,     0,     8,     1,     3,     0,     2,
       0,     5,     2,     0,     2,     2,     1,     1,     1,     2,
       5,     5,     3,     1,     1,     1,     1,     1,     2,     0,
       2,     2,     1,     1,     1,     2,     2,     2,     4,     3,
       3,     5,     5,     0,     4,     2,     1,     4,     4,     1,
       3,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: global_definitions main_block  */
#line 58 "parser.y"
       { 
           log_syntax("Program complet recunoscut."); 
           finalize_program();
       }
#line 1288 "parser.tab.cp"
    break;

  case 7: /* $@1: %empty  */
#line 70 "parser.y"
                                              {
                    SymbolTable* newScope = new SymbolTable(currentTable, "class_" + *(yyvsp[-1].strVal));
                    globalTable->insert(*(yyvsp[-1].strVal), *(yyvsp[-1].strVal), "class", {}, newScope);
                    classScopes[*(yyvsp[-1].strVal)] = newScope;
                    currentTable = newScope;
                }
#line 1299 "parser.tab.cp"
    break;

  case 8: /* class_definition: CLASS_KEY IDENTIFIER LBRACE $@1 class_body RBRACE  */
#line 76 "parser.y"
                { 
                    currentTable = currentTable->getParent();
                    log_syntax("Definitie Clasa: " + *((yyvsp[-4].strVal)) + " recunoscuta."); 
                }
#line 1308 "parser.tab.cp"
    break;

  case 12: /* variable_definition: data_type IDENTIFIER SEMICOLON  */
#line 88 "parser.y"
                   { 
                        Symbol* s = currentTable->lookup(*(yyvsp[-1].strVal)); 
                            if(s) {
                                std::string msg = "Eroare: Identificatorul '" + *(yyvsp[-1].strVal) + "' deja a fost declarat.";
                                yyerror(msg.c_str()); exit(1); 
                            }
                       log_syntax("Declaratie Variabila recunoscuta: " + *((yyvsp[-2].strVal)) + " " + *((yyvsp[-1].strVal))); 
                       currentTable->insert(*(yyvsp[-1].strVal), *(yyvsp[-2].strVal), "variable");
                   }
#line 1322 "parser.tab.cp"
    break;

  case 13: /* field_declaration: data_type IDENTIFIER SEMICOLON  */
#line 100 "parser.y"
                 { 
                    Symbol* s = currentTable->lookup(*(yyvsp[-1].strVal)); 
                            if(s) {
                                std::string msg = "Eroare: Identificatorul '" + *(yyvsp[-1].strVal) + "' deja a fost declarat.";
                                yyerror(msg.c_str()); exit(1); 
                            }
                     log_syntax("Declaratie Camp/Field recunoscuta: " + *((yyvsp[-2].strVal)) + " " + *((yyvsp[-1].strVal))); 
                     currentTable->insert(*(yyvsp[-1].strVal), *(yyvsp[-2].strVal), "field");
                 }
#line 1336 "parser.tab.cp"
    break;

  case 14: /* $@2: %empty  */
#line 111 "parser.y"
                                               {
                    currentTable = new SymbolTable(currentTable, "method_" + *(yyvsp[-1].strVal));
                 }
#line 1344 "parser.tab.cp"
    break;

  case 15: /* $@3: %empty  */
#line 113 "parser.y"
                                         {
                    currentTable->getParent()->insert(*(yyvsp[-4].strVal), *(yyvsp[-5].strVal), "method", *(yyvsp[-1].typeList));
                 }
#line 1352 "parser.tab.cp"
    break;

  case 16: /* method_definition: data_type IDENTIFIER LPAREN $@2 parameter_list RPAREN $@3 block  */
#line 116 "parser.y"
                 { 
                    currentTable = currentTable->getParent();
                    log_syntax("Definitie Metoda: " + *((yyvsp[-7].strVal)) + " " + *((yyvsp[-6].strVal))); 
                 }
#line 1361 "parser.tab.cp"
    break;

  case 17: /* $@4: %empty  */
#line 120 "parser.y"
                                               {
                    currentTable = new SymbolTable(currentTable, "method_" + *(yyvsp[-1].strVal));
                 }
#line 1369 "parser.tab.cp"
    break;

  case 18: /* $@5: %empty  */
#line 122 "parser.y"
                                         {
                    currentTable->getParent()->insert(*(yyvsp[-4].strVal), "void", "method", *(yyvsp[-1].typeList));
                 }
#line 1377 "parser.tab.cp"
    break;

  case 19: /* method_definition: VOID_TYPE IDENTIFIER LPAREN $@4 parameter_list RPAREN $@5 block  */
#line 125 "parser.y"
                 { 
                    currentTable = currentTable->getParent();
                    log_syntax("Definitie Metoda VOID recunoscuta: " + *((yyvsp[-6].strVal))); 
                 }
#line 1386 "parser.tab.cp"
    break;

  case 20: /* $@6: %empty  */
#line 131 "parser.y"
                                                 {
                        currentTable = new SymbolTable(currentTable, "func_" + *(yyvsp[-1].strVal));
                    }
#line 1394 "parser.tab.cp"
    break;

  case 21: /* $@7: %empty  */
#line 133 "parser.y"
                                            {
                        globalTable->insert(*(yyvsp[-4].strVal), *(yyvsp[-5].strVal), "function", *(yyvsp[-1].typeList));
                    }
#line 1402 "parser.tab.cp"
    break;

  case 22: /* function_definition: data_type IDENTIFIER LPAREN $@6 parameter_list RPAREN $@7 block  */
#line 136 "parser.y"
                   { 
                       currentTable = currentTable->getParent();
                       log_syntax("Definitie Functie: " + *((yyvsp[-7].strVal)) + " " + *((yyvsp[-6].strVal))); 
                   }
#line 1411 "parser.tab.cp"
    break;

  case 23: /* $@8: %empty  */
#line 140 "parser.y"
                                                 {
                        currentTable = new SymbolTable(currentTable, "func_" + *(yyvsp[-1].strVal));
                    }
#line 1419 "parser.tab.cp"
    break;

  case 24: /* $@9: %empty  */
#line 142 "parser.y"
                                            {
                        globalTable->insert(*(yyvsp[-4].strVal), "void", "function", *(yyvsp[-1].typeList));
                    }
#line 1427 "parser.tab.cp"
    break;

  case 25: /* function_definition: VOID_TYPE IDENTIFIER LPAREN $@8 parameter_list RPAREN $@9 block  */
#line 145 "parser.y"
                   { 
                       currentTable = currentTable->getParent();
                       log_syntax("Definitie Functie VOID recunoscuta: " + *((yyvsp[-6].strVal))); 
                   }
#line 1436 "parser.tab.cp"
    break;

  case 26: /* parameter_list: parameter  */
#line 152 "parser.y"
              { 
                  (yyval.typeList) = new std::vector<std::string>(); 
                  (yyval.typeList)->push_back(*(yyvsp[0].strVal)); 
              }
#line 1445 "parser.tab.cp"
    break;

  case 27: /* parameter_list: parameter_list COMMA parameter  */
#line 157 "parser.y"
              { 
                  (yyvsp[-2].typeList)->push_back(*(yyvsp[0].strVal)); 
                  (yyval.typeList) = (yyvsp[-2].typeList); 
              }
#line 1454 "parser.tab.cp"
    break;

  case 28: /* parameter_list: %empty  */
#line 162 "parser.y"
              { 
                  (yyval.typeList) = new std::vector<std::string>(); 
              }
#line 1462 "parser.tab.cp"
    break;

  case 29: /* parameter: data_type IDENTIFIER  */
#line 168 "parser.y"
         {
             currentTable->insert(*(yyvsp[0].strVal), *(yyvsp[-1].strVal), "parameter");
             (yyval.strVal) = (yyvsp[-1].strVal);
         }
#line 1471 "parser.tab.cp"
    break;

  case 30: /* $@10: %empty  */
#line 174 "parser.y"
                            {
                currentTable = new SymbolTable(currentTable, "main");
            }
#line 1479 "parser.tab.cp"
    break;

  case 31: /* main_block: MAIN_KEY LBRACE $@10 no_decl_statement_list RBRACE  */
#line 177 "parser.y"
          { 
              currentTable = currentTable->getParent(); 
              log_syntax("Blocul Main recunoscut.");
          }
#line 1488 "parser.tab.cp"
    break;

  case 34: /* no_decl_statement: assignment_statement SEMICOLON  */
#line 188 "parser.y"
         { 
             if((yyvsp[-1].astPtr)) (yyvsp[-1].astPtr)->evaluate(currentTable); 
         }
#line 1496 "parser.tab.cp"
    break;

  case 35: /* no_decl_statement: function_call_statement SEMICOLON  */
#line 192 "parser.y"
         { 
             if((yyvsp[-1].astPtr)) (yyvsp[-1].astPtr)->evaluate(currentTable); 
         }
#line 1504 "parser.tab.cp"
    break;

  case 40: /* no_decl_statement: PRINT_CALL LPAREN expression RPAREN SEMICOLON  */
#line 200 "parser.y"
         {
             ASTNode* pNode = new ASTNode("Print", "void", (yyvsp[-2].astPtr));
             pNode->evaluate(currentTable);
             log_syntax("Apel Print(expr) recunoscut.");
         }
#line 1514 "parser.tab.cp"
    break;

  case 41: /* no_decl_statement: PRINT_CALL LPAREN boolean_expression RPAREN SEMICOLON  */
#line 206 "parser.y"
         {
             ASTNode* pNode = new ASTNode("Print", "void", (yyvsp[-2].astPtr));
             pNode->evaluate(currentTable);
             log_syntax("Apel Print(expr) recunoscut.");
         }
#line 1524 "parser.tab.cp"
    break;

  case 42: /* no_decl_block: LBRACE no_decl_statement_list RBRACE  */
#line 214 "parser.y"
         { log_syntax("Block recunoscut."); }
#line 1530 "parser.tab.cp"
    break;

  case 43: /* data_type: INT_TYPE  */
#line 217 "parser.y"
                    { (yyval.strVal) = new std::string("int"); }
#line 1536 "parser.tab.cp"
    break;

  case 44: /* data_type: FLOAT_TYPE  */
#line 218 "parser.y"
                      { (yyval.strVal) = new std::string("float"); }
#line 1542 "parser.tab.cp"
    break;

  case 45: /* data_type: STRING_TYPE  */
#line 219 "parser.y"
                       { (yyval.strVal) = new std::string("string"); }
#line 1548 "parser.tab.cp"
    break;

  case 46: /* data_type: BOOL_TYPE  */
#line 220 "parser.y"
                     { (yyval.strVal) = new std::string("bool"); }
#line 1554 "parser.tab.cp"
    break;

  case 47: /* data_type: IDENTIFIER  */
#line 221 "parser.y"
                      { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1560 "parser.tab.cp"
    break;

  case 50: /* statement: assignment_statement SEMICOLON  */
#line 228 "parser.y"
                                          { if((yyvsp[-1].astPtr)) (yyvsp[-1].astPtr)->evaluate(currentTable); }
#line 1566 "parser.tab.cp"
    break;

  case 51: /* statement: function_call_statement SEMICOLON  */
#line 229 "parser.y"
                                             { if((yyvsp[-1].astPtr)) (yyvsp[-1].astPtr)->evaluate(currentTable); }
#line 1572 "parser.tab.cp"
    break;

  case 57: /* local_variable_declaration: data_type IDENTIFIER  */
#line 238 "parser.y"
                          { Symbol* s = currentTable->lookup(*(yyvsp[0].strVal)); 
                            if(s) {
                                std::string msg = "Eroare: Identificatorul '" + *(yyvsp[0].strVal) + "' deja a fost declarat.";
                                yyerror(msg.c_str()); exit(1); 
                            }
                            currentTable->insert(*(yyvsp[0].strVal), *(yyvsp[-1].strVal), "variable"); }
#line 1583 "parser.tab.cp"
    break;

  case 58: /* local_variable_declaration: data_type IDENTIFIER ASSIGN expression  */
#line 245 "parser.y"
                          { 
                            Symbol* s = currentTable->lookup(*(yyvsp[-2].strVal)); 
                            if(s) {
                                std::string msg = "Eroare: Identificatorul '" + *(yyvsp[-2].strVal) + "' deja a fost declarat.";
                                yyerror(msg.c_str()); exit(1); 
                            }
                              log_syntax("Declaratie Variabila Locala recunoscuta.");
                              currentTable->insert(*(yyvsp[-2].strVal), *(yyvsp[-3].strVal), "variable"); 
                              checkTypes(*(yyvsp[-3].strVal), (yyvsp[0].astPtr)->nodeType, "init"); 
                              (yyvsp[0].astPtr)->evaluate(currentTable); 
                          }
#line 1599 "parser.tab.cp"
    break;

  case 59: /* assignment_statement: IDENTIFIER ASSIGN expression  */
#line 259 "parser.y"
                    { 
                        log_syntax("Assignment simplu recunoscut: " + *((yyvsp[-2].strVal)));
                        Symbol* s = currentTable->lookup(*(yyvsp[-2].strVal)); 
                        if(!s) {
                            std::string msg = "Eroare: Identificatorul '" + *(yyvsp[-2].strVal) + "' nu a fost declarat.";
                            yyerror(msg.c_str()); exit(1); 
                        }
                        checkTypes(s->type, (yyvsp[0].astPtr)->nodeType, "atribuire"); 
                        (yyval.astPtr) = new ASTNode(":=", s->type, new ASTNode(*(yyvsp[-2].strVal), s->type), (yyvsp[0].astPtr));
                    }
#line 1614 "parser.tab.cp"
    break;

  case 60: /* assignment_statement: object_access ASSIGN expression  */
#line 270 "parser.y"
                    { 
                        log_syntax("Assignment cu Object Access recunoscut.");
                        checkTypes((yyvsp[-2].astPtr)->nodeType, (yyvsp[0].astPtr)->nodeType, "atribuire obiect"); 
                        (yyval.astPtr) = new ASTNode(":=", (yyvsp[-2].astPtr)->nodeType, (yyvsp[-2].astPtr), (yyvsp[0].astPtr));
                    }
#line 1624 "parser.tab.cp"
    break;

  case 61: /* if_statement: IF_KEY LPAREN boolean_expression RPAREN no_decl_block  */
#line 278 "parser.y"
            { log_syntax("If statement recunoscut."); }
#line 1630 "parser.tab.cp"
    break;

  case 62: /* while_statement: WHILE_KEY LPAREN boolean_expression RPAREN no_decl_block  */
#line 282 "parser.y"
               { log_syntax("While statement recunoscut."); }
#line 1636 "parser.tab.cp"
    break;

  case 63: /* $@11: %empty  */
#line 285 "parser.y"
              {
            currentTable = new SymbolTable(currentTable, "block_" + std::to_string(yylineno));
        }
#line 1644 "parser.tab.cp"
    break;

  case 64: /* block: LBRACE $@11 statement_list RBRACE  */
#line 288 "parser.y"
     { 
         currentTable = currentTable->getParent(); 
         log_syntax("Block recunoscut."); 
     }
#line 1653 "parser.tab.cp"
    break;

  case 65: /* return_statement: RETURN_KEY expression  */
#line 295 "parser.y"
                { log_syntax("Return cu expresie recunoscut."); }
#line 1659 "parser.tab.cp"
    break;

  case 66: /* return_statement: RETURN_KEY  */
#line 297 "parser.y"
                { log_syntax("Return VOID recunoscut."); }
#line 1665 "parser.tab.cp"
    break;

  case 67: /* function_call_statement: IDENTIFIER LPAREN argument_list RPAREN  */
#line 301 "parser.y"
                       { 
                            Symbol* s = currentTable->lookup(*(yyvsp[-3].strVal));
                            if (!s) {
                                std::string msg = "Eroare: Functia '" + *(yyvsp[-3].strVal) + "' nu a fost declarata.";
                                yyerror(msg.c_str()); exit(1);
                            }

                            if (s->paramTypes.size() != (yyvsp[-1].typeList)->size()) {
                                std::string msg = "Eroare: Functia '" + *(yyvsp[-3].strVal) + "' asteapta " + 
                                                std::to_string(s->paramTypes.size()) + 
                                                " argumente, dar s-au primit " + std::to_string((yyvsp[-1].typeList)->size());
                                yyerror(msg.c_str()); exit(1);
                            }

                            for (size_t i = 0; i < (yyvsp[-1].typeList)->size(); ++i) {
                                if (s->paramTypes[i] != (*(yyvsp[-1].typeList))[i]) {
                                    std::string msg = "Eroare: Tip invalid pentru argumentul " + std::to_string(i+1) + 
                                                    " al functiei '" + *(yyvsp[-3].strVal) + "' (Asteptat: " + 
                                                    s->paramTypes[i] + ", Primit: " + (*(yyvsp[-1].typeList))[i] + ")";
                                    yyerror(msg.c_str()); exit(1); 
                                }
                            }

                            (yyval.astPtr) = new ASTNode("OTHER", s->type);
                            log_syntax("Apel functie verificat semantic: " + *(yyvsp[-3].strVal));
                       }
#line 1696 "parser.tab.cp"
    break;

  case 68: /* function_call_statement: object_access LPAREN argument_list RPAREN  */
#line 328 "parser.y"
                       { 
                           log_syntax("Apel Metoda recunoscut.");
                           (yyval.astPtr) = new ASTNode("OTHER", (yyvsp[-3].astPtr)->nodeType);
                       }
#line 1705 "parser.tab.cp"
    break;

  case 69: /* argument_list: expression  */
#line 335 "parser.y"
             { 
                 (yyval.typeList) = new std::vector<std::string>(); 
                 (yyval.typeList)->push_back((yyvsp[0].astPtr)->nodeType); 
             }
#line 1714 "parser.tab.cp"
    break;

  case 70: /* argument_list: argument_list COMMA expression  */
#line 340 "parser.y"
             { 
                 (yyvsp[-2].typeList)->push_back((yyvsp[0].astPtr)->nodeType); 
                 (yyval.typeList) = (yyvsp[-2].typeList); 
             }
#line 1723 "parser.tab.cp"
    break;

  case 71: /* argument_list: %empty  */
#line 345 "parser.y"
             { 
                 (yyval.typeList) = new std::vector<std::string>(); 
             }
#line 1731 "parser.tab.cp"
    break;

  case 72: /* object_access: IDENTIFIER DOT IDENTIFIER  */
#line 351 "parser.y"
             { 
                 Symbol* obj = currentTable->lookup(*(yyvsp[-2].strVal));
                 if (!obj) { 
                     std::string msg = "Eroare: Obiectul '" + *(yyvsp[-2].strVal) + "' nu a fost declarat.";
                     yyerror(msg.c_str()); exit(1); 
                 }

                 if (classScopes.find(obj->type) == classScopes.end()) {
                     std::string msg = "Eroare: '" + *(yyvsp[-2].strVal) + "' (tip " + obj->type + ") nu este o instanta de clasa.";
                     yyerror(msg.c_str()); exit(1);
                 }

                 SymbolTable* targetClassTable = classScopes[obj->type];
                 Symbol* member = targetClassTable->lookupStrict(*(yyvsp[0].strVal));
                 if (!member) {
                     std::string msg = "Eroare: Membrul '" + *(yyvsp[0].strVal) + "' nu exista in clasa '" + obj->type + "'.";
                     yyerror(msg.c_str()); exit(1);
                 }

                 log_syntax("Object Access verificat: " + *((yyvsp[-2].strVal)) + "." + *((yyvsp[0].strVal)));
                 (yyval.astPtr) = new ASTNode(*(yyvsp[0].strVal), member->type);
             }
#line 1758 "parser.tab.cp"
    break;

  case 73: /* boolean_expression: expression OP_LT expression  */
#line 375 "parser.y"
                                                { (yyval.astPtr) = new ASTNode("<", "bool", (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1764 "parser.tab.cp"
    break;

  case 74: /* boolean_expression: expression OP_GT expression  */
#line 376 "parser.y"
                                                { (yyval.astPtr) = new ASTNode(">", "bool", (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1770 "parser.tab.cp"
    break;

  case 75: /* boolean_expression: expression OP_EQ expression  */
#line 377 "parser.y"
                                                { (yyval.astPtr) = new ASTNode("==", "bool", (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1776 "parser.tab.cp"
    break;

  case 76: /* boolean_expression: expression OP_NEQ expression  */
#line 378 "parser.y"
                                                 { (yyval.astPtr) = new ASTNode("!=", "bool", (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1782 "parser.tab.cp"
    break;

  case 77: /* boolean_expression: boolean_expression OP_AND boolean_expression  */
#line 379 "parser.y"
                                                                 { (yyval.astPtr) = new ASTNode("&&", "bool", (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1788 "parser.tab.cp"
    break;

  case 78: /* boolean_expression: boolean_expression OP_OR boolean_expression  */
#line 380 "parser.y"
                                                                { (yyval.astPtr) = new ASTNode("||", "bool", (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1794 "parser.tab.cp"
    break;

  case 79: /* boolean_expression: LPAREN boolean_expression RPAREN  */
#line 381 "parser.y"
                                                     { (yyval.astPtr) = (yyvsp[-1].astPtr); }
#line 1800 "parser.tab.cp"
    break;

  case 80: /* boolean_expression: BOOL_LITERAL  */
#line 382 "parser.y"
                                 { (yyval.astPtr) = new ASTNode("bool_lit", "bool"); }
#line 1806 "parser.tab.cp"
    break;

  case 81: /* expression: expression OP_ADD term  */
#line 385 "parser.y"
                                   { (yyval.astPtr) = new ASTNode("+", (yyvsp[-2].astPtr)->nodeType, (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1812 "parser.tab.cp"
    break;

  case 82: /* expression: expression OP_SUB term  */
#line 386 "parser.y"
                                   { (yyval.astPtr) = new ASTNode("-", (yyvsp[-2].astPtr)->nodeType, (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1818 "parser.tab.cp"
    break;

  case 83: /* expression: term  */
#line 387 "parser.y"
                 { (yyval.astPtr) = (yyvsp[0].astPtr); }
#line 1824 "parser.tab.cp"
    break;

  case 84: /* term: term OP_MUL factor  */
#line 390 "parser.y"
                         { (yyval.astPtr) = new ASTNode("*", (yyvsp[-2].astPtr)->nodeType, (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1830 "parser.tab.cp"
    break;

  case 85: /* term: term OP_DIV factor  */
#line 391 "parser.y"
                         { (yyval.astPtr) = new ASTNode("/", (yyvsp[-2].astPtr)->nodeType, (yyvsp[-2].astPtr), (yyvsp[0].astPtr)); }
#line 1836 "parser.tab.cp"
    break;

  case 86: /* term: factor  */
#line 392 "parser.y"
             { (yyval.astPtr) = (yyvsp[0].astPtr); }
#line 1842 "parser.tab.cp"
    break;

  case 87: /* factor: IDENTIFIER  */
#line 396 "parser.y"
       { 
            log_syntax("Expresie: Identificator");
            Symbol* s = currentTable->lookup(*(yyvsp[0].strVal)); 
            (yyval.astPtr) = new ASTNode(*(yyvsp[0].strVal), (s ? s->type : "int"));
       }
#line 1852 "parser.tab.cp"
    break;

  case 88: /* factor: object_access  */
#line 401 "parser.y"
                      { log_syntax("Expresie: Acces Obiect"); (yyval.astPtr) = (yyvsp[0].astPtr); }
#line 1858 "parser.tab.cp"
    break;

  case 89: /* factor: INTEGER_LITERAL  */
#line 403 "parser.y"
      { 
          log_syntax("Expresie: Literal Int"); 
          (yyval.astPtr) = new ASTNode(std::to_string((yyvsp[0].intVal)), "int");
      }
#line 1867 "parser.tab.cp"
    break;

  case 90: /* factor: FLOAT_LITERAL  */
#line 408 "parser.y"
      { 
          log_syntax("Expresie: Literal Float"); 
          (yyval.astPtr) = new ASTNode(std::to_string((yyvsp[0].floatVal)), "float"); 
      }
#line 1876 "parser.tab.cp"
    break;

  case 91: /* factor: function_call_statement  */
#line 412 "parser.y"
                                { log_syntax("Expresie: Apel Functie"); (yyval.astPtr) = (yyvsp[0].astPtr); }
#line 1882 "parser.tab.cp"
    break;

  case 92: /* factor: LPAREN expression RPAREN  */
#line 413 "parser.y"
                                 { log_syntax("Factor: Paranteze"); (yyval.astPtr) = (yyvsp[-1].astPtr); }
#line 1888 "parser.tab.cp"
    break;


#line 1892 "parser.tab.cp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 416 "parser.y"


void yyerror(const char *s) {
    std::cerr << "!!! EROARE la linia " << yylineno << ": " << s << std::endl;
}

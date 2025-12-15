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
#line 3 "parser.y"

#include <iostream>
#include <string>
#include <vector>

// Funcție de ajutor pentru a afișa când o structură sintactică este recunoscută
inline void log_syntax(const std::string& rule) {
    std::cout << "\t---> Sintaxa recunoscuta: " << rule << std::endl;
}

// Declaratia functiilor externe
extern int yylex();
void yyerror(const char *s);
extern int yylineno; // Variabila Flex pentru numarul liniei

// Structura pentru a stoca rezultatul expresiilor (simplificat pentru demo sintactic)

#line 89 "parser.tab.cpp"

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

#include "parser.tab.hpp"
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
  YYSYMBOL_class_body = 43,                /* class_body  */
  YYSYMBOL_field_declaration = 44,         /* field_declaration  */
  YYSYMBOL_method_definition = 45,         /* method_definition  */
  YYSYMBOL_function_definition = 46,       /* function_definition  */
  YYSYMBOL_parameter_list = 47,            /* parameter_list  */
  YYSYMBOL_parameter = 48,                 /* parameter  */
  YYSYMBOL_main_block = 49,                /* main_block  */
  YYSYMBOL_no_decl_statement_list = 50,    /* no_decl_statement_list  */
  YYSYMBOL_no_decl_statement = 51,         /* no_decl_statement  */
  YYSYMBOL_no_decl_block = 52,             /* no_decl_block  */
  YYSYMBOL_data_type = 53,                 /* data_type  */
  YYSYMBOL_statement_list = 54,            /* statement_list  */
  YYSYMBOL_statement = 55,                 /* statement  */
  YYSYMBOL_local_variable_declaration = 56, /* local_variable_declaration  */
  YYSYMBOL_assignment_statement = 57,      /* assignment_statement  */
  YYSYMBOL_if_statement = 58,              /* if_statement  */
  YYSYMBOL_while_statement = 59,           /* while_statement  */
  YYSYMBOL_block = 60,                     /* block  */
  YYSYMBOL_return_statement = 61,          /* return_statement  */
  YYSYMBOL_function_call_statement = 62,   /* function_call_statement  */
  YYSYMBOL_argument_list = 63,             /* argument_list  */
  YYSYMBOL_object_access = 64,             /* object_access  */
  YYSYMBOL_boolean_expression = 65,        /* boolean_expression  */
  YYSYMBOL_expression = 66,                /* expression  */
  YYSYMBOL_term = 67,                      /* term  */
  YYSYMBOL_factor = 68                     /* factor  */
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
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

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
static const yytype_uint8 yyrline[] =
{
       0,    69,    69,    73,    74,    75,    76,    79,    83,    84,
      85,    88,    92,    94,    98,   100,   104,   105,   106,   109,
     112,   116,   117,   120,   121,   122,   123,   124,   125,   128,
     132,   133,   134,   135,   136,   139,   140,   143,   144,   145,
     146,   147,   148,   149,   152,   153,   157,   159,   163,   167,
     171,   175,   177,   181,   183,   185,   189,   190,   191,   194,
     198,   199,   200,   201,   202,   203,   204,   205,   208,   209,
     210,   213,   214,   215,   218,   219,   220,   221,   222,   223,
     224
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
  "$accept", "program", "global_definitions", "class_definition",
  "class_body", "field_declaration", "method_definition",
  "function_definition", "parameter_list", "parameter", "main_block",
  "no_decl_statement_list", "no_decl_statement", "no_decl_block",
  "data_type", "statement_list", "statement", "local_variable_declaration",
  "assignment_statement", "if_statement", "while_statement", "block",
  "return_statement", "function_call_statement", "argument_list",
  "object_access", "boolean_expression", "expression", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-50)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -50,     6,     8,   -50,   -50,   -50,   -50,   -50,   -31,     5,
      20,   -50,   -50,   -50,   -50,   -50,    34,    51,    60,   -50,
       0,   -50,    31,    99,   -50,    31,    92,   -11,   -50,    66,
      87,    96,   110,   105,   -50,   -50,    73,   -50,    93,   -50,
     -50,   -50,   107,   131,    62,   -10,   128,   -50,   -50,   -50,
     132,   111,    31,   -50,    47,    47,   110,    -2,   -50,   -50,
     -50,   -50,   143,   109,   125,   -50,   110,    46,   110,   110,
     137,   -50,   -50,   -50,   110,   110,   111,   144,   139,   -50,
     -50,    47,   -50,   114,   133,   134,    -6,   110,   110,   110,
     110,    16,   -50,    73,   138,   -50,   148,   149,   -50,   -50,
     -50,   150,   151,   109,    44,   109,   -50,   109,    45,   -50,
      31,    31,   136,    42,    47,    47,   152,   110,   110,   110,
     110,   152,   -50,   125,   125,   -50,   -50,   -50,   163,   -50,
     -50,   -50,   -50,   -50,   110,   -50,    77,    84,   -50,   154,
     -50,   -50,   -50,   109,   109,   109,   109,   -50,   110,   109,
     111,   111,   106,   109,   -50,   -50,   -50
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,     0,     0,     1,    30,    31,    32,    33,     0,     0,
       0,    34,     3,     5,     4,     2,     0,     0,     0,    22,
       0,    10,    18,     0,    11,    18,     0,     0,    16,     0,
       0,     0,    52,     0,    36,    20,     0,    21,     0,    25,
      26,    27,     0,     0,     0,     0,     0,     7,     8,     9,
       0,     0,     0,    19,     0,     0,     0,    74,    76,    77,
      78,    79,    75,    51,    70,    73,     0,     0,     0,    58,
       0,    23,    28,    24,     0,    58,     0,     0,     0,    15,
      17,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    34,     0,    35,     0,     0,    39,    40,
      41,     0,     0,    46,     0,    56,    59,    47,     0,    14,
      18,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    68,    69,    71,    72,    54,    44,    43,
      37,    42,    38,    53,     0,    55,     0,     0,    66,    64,
      65,    22,    48,    60,    61,    62,    63,    49,     0,    57,
       0,     0,     0,    45,    13,    12,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,   -50,   -50,   -50,   153,   -50,   -50,   -17,   129,
     -50,    41,   -50,    64,     3,   -50,   -50,   -50,   116,   117,
     119,   -49,   120,   -23,   113,   -22,   -48,   -28,    63,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    12,    26,    13,    49,    14,    27,    28,
      15,    23,    37,   142,    29,    67,    95,    96,    38,    39,
      40,    41,    42,    61,   104,    62,    83,    84,    64,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,    44,    79,    17,    63,    16,     3,    85,    45,    87,
      88,     4,     5,     6,     7,     8,    51,    76,   100,     9,
      10,   122,    52,    52,    69,    24,    25,   109,    86,    50,
      70,    87,    88,   112,     4,     5,     6,     7,    91,    18,
     103,   105,    11,   127,   102,    44,   107,   105,    19,     4,
       5,     6,     7,   113,    30,    31,    32,    87,    88,    33,
      33,   117,   118,   119,   120,    11,   139,   140,    20,   122,
      94,   133,   135,    81,    34,    92,    74,   134,   134,    21,
      93,    57,    58,    59,    60,    82,    22,    68,    75,   143,
     144,   145,   146,   136,   137,     4,     5,     6,     7,    69,
      53,   154,   155,    46,   150,    70,   149,    30,    31,    32,
      52,   151,    33,    54,    30,    31,    32,    52,    71,    33,
     153,    47,    55,    33,    87,    88,    11,    34,    35,    43,
      44,    66,    72,    36,    34,   156,    56,   114,   115,    34,
      36,   116,    89,    90,    57,    58,    59,    60,    87,    88,
     123,   124,   117,   118,   119,   120,    73,   114,   115,   114,
     115,   121,    77,   138,    24,   111,    78,   125,   126,    75,
     110,   106,   128,   129,   130,   131,   132,   148,   115,    48,
     141,    80,   152,    97,    98,   147,    99,   101,   108
};

static const yytype_uint8 yycheck[] =
{
      23,    23,    51,    34,    32,     2,     0,    55,    25,    15,
      16,     3,     4,     5,     6,     7,    27,    27,    67,    11,
      12,    27,    33,    33,    26,    25,    26,    76,    56,    26,
      32,    15,    16,    81,     3,     4,     5,     6,    66,    34,
      68,    69,    34,    27,    67,    67,    74,    75,    28,     3,
       4,     5,     6,    81,     8,     9,    10,    15,    16,    13,
      13,    19,    20,    21,    22,    34,   114,   115,    34,    27,
      67,    27,    27,    26,    28,    29,    14,    33,    33,    28,
      34,    34,    35,    36,    37,    38,    26,    14,    26,   117,
     118,   119,   120,   110,   111,     3,     4,     5,     6,    26,
      34,   150,   151,    11,    27,    32,   134,     8,     9,    10,
      33,    27,    13,    26,     8,     9,    10,    33,    25,    13,
     148,    29,    26,    13,    15,    16,    34,    28,    29,   152,
     152,    26,    25,    34,    28,    29,    26,    23,    24,    28,
      34,    27,    17,    18,    34,    35,    36,    37,    15,    16,
      87,    88,    19,    20,    21,    22,    25,    23,    24,    23,
      24,    27,    34,    27,    25,    26,    34,    89,    90,    26,
      26,    34,    34,    25,    25,    25,    25,    14,    24,    26,
      28,    52,   141,    67,    67,   121,    67,    67,    75
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    41,     0,     3,     4,     5,     6,     7,    11,
      12,    34,    42,    44,    46,    49,    53,    34,    34,    28,
      34,    28,    26,    50,    25,    26,    43,    47,    48,    53,
       8,     9,    10,    13,    28,    29,    34,    51,    57,    58,
      59,    60,    61,    62,    64,    47,    11,    29,    44,    45,
      53,    27,    33,    34,    26,    26,    26,    34,    35,    36,
      37,    62,    64,    66,    67,    68,    26,    54,    14,    26,
      32,    25,    25,    25,    14,    26,    27,    34,    34,    60,
      48,    26,    38,    65,    66,    65,    66,    15,    16,    17,
      18,    66,    29,    34,    53,    55,    56,    57,    58,    59,
      60,    61,    62,    66,    63,    66,    34,    66,    63,    60,
      26,    26,    65,    66,    23,    24,    27,    19,    20,    21,
      22,    27,    27,    67,    67,    68,    68,    27,    34,    25,
      25,    25,    25,    27,    33,    27,    47,    47,    27,    65,
      65,    28,    52,    66,    66,    66,    66,    52,    14,    66,
      27,    27,    50,    66,    60,    60,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    42,    43,    43,
      43,    44,    45,    45,    46,    46,    47,    47,    47,    48,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    53,    53,    53,    54,    54,    55,    55,    55,
      55,    55,    55,    55,    56,    56,    57,    57,    58,    59,
      60,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     0,     5,     2,     2,
       0,     3,     6,     6,     6,     6,     1,     3,     0,     2,
       4,     2,     0,     2,     2,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     2,     0,     2,     2,     1,
       1,     1,     2,     2,     2,     4,     3,     3,     5,     5,
       3,     2,     1,     4,     4,     4,     1,     3,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3
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
#line 70 "parser.y"
       { log_syntax("Program complet recunoscut."); }
#line 1256 "parser.tab.cpp"
    break;

  case 7: /* class_definition: CLASS_KEY IDENTIFIER LBRACE class_body RBRACE  */
#line 80 "parser.y"
                { log_syntax("Definitie Clasa: " + *((yyvsp[-3].strVal)) + " recunoscuta."); }
#line 1262 "parser.tab.cpp"
    break;

  case 11: /* field_declaration: data_type IDENTIFIER SEMICOLON  */
#line 89 "parser.y"
                 { log_syntax("Declaratie Camp/Field recunoscuta: " + *((yyvsp[-2].strVal)) + " " + *((yyvsp[-1].strVal))); }
#line 1268 "parser.tab.cpp"
    break;

  case 12: /* method_definition: data_type IDENTIFIER LPAREN parameter_list RPAREN block  */
#line 93 "parser.y"
                 { log_syntax("Definitie Metoda/Functie recunoscuta: " + *((yyvsp[-5].strVal)) + " " + *((yyvsp[-4].strVal))); }
#line 1274 "parser.tab.cpp"
    break;

  case 13: /* method_definition: VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN block  */
#line 95 "parser.y"
                 { log_syntax("Definitie Metoda/Functie VOID recunoscuta: " + *((yyvsp[-4].strVal))); }
#line 1280 "parser.tab.cpp"
    break;

  case 14: /* function_definition: data_type IDENTIFIER LPAREN parameter_list RPAREN block  */
#line 99 "parser.y"
                   { log_syntax("Definitie Functie recunoscuta: " + *((yyvsp[-5].strVal)) + " " + *((yyvsp[-4].strVal))); }
#line 1286 "parser.tab.cpp"
    break;

  case 15: /* function_definition: VOID_TYPE IDENTIFIER LPAREN parameter_list RPAREN block  */
#line 101 "parser.y"
                   { log_syntax("Definitie Functie VOID recunoscuta: " + *((yyvsp[-4].strVal))); }
#line 1292 "parser.tab.cpp"
    break;

  case 20: /* main_block: MAIN_KEY LBRACE no_decl_statement_list RBRACE  */
#line 113 "parser.y"
          { log_syntax("Blocul Main recunoscut."); }
#line 1298 "parser.tab.cpp"
    break;

  case 29: /* no_decl_block: LBRACE no_decl_statement_list RBRACE  */
#line 129 "parser.y"
         { log_syntax("Block recunoscut."); }
#line 1304 "parser.tab.cpp"
    break;

  case 30: /* data_type: INT_TYPE  */
#line 132 "parser.y"
                    { (yyval.strVal) = new std::string("int"); }
#line 1310 "parser.tab.cpp"
    break;

  case 31: /* data_type: FLOAT_TYPE  */
#line 133 "parser.y"
                      { (yyval.strVal) = new std::string("float"); }
#line 1316 "parser.tab.cpp"
    break;

  case 32: /* data_type: STRING_TYPE  */
#line 134 "parser.y"
                       { (yyval.strVal) = new std::string("string"); }
#line 1322 "parser.tab.cpp"
    break;

  case 33: /* data_type: BOOL_TYPE  */
#line 135 "parser.y"
                     { (yyval.strVal) = new std::string("bool"); }
#line 1328 "parser.tab.cpp"
    break;

  case 45: /* local_variable_declaration: data_type IDENTIFIER ASSIGN expression  */
#line 154 "parser.y"
                          { log_syntax("Declaratie Variabila Locala recunoscuta."); }
#line 1334 "parser.tab.cpp"
    break;

  case 46: /* assignment_statement: IDENTIFIER ASSIGN expression  */
#line 158 "parser.y"
                    { log_syntax("Assignment simplu recunoscut: " + *((yyvsp[-2].strVal))); }
#line 1340 "parser.tab.cpp"
    break;

  case 47: /* assignment_statement: object_access ASSIGN expression  */
#line 160 "parser.y"
                    { log_syntax("Assignment cu Object Access recunoscut."); }
#line 1346 "parser.tab.cpp"
    break;

  case 48: /* if_statement: IF_KEY LPAREN boolean_expression RPAREN no_decl_block  */
#line 164 "parser.y"
            { log_syntax("If statement recunoscut."); }
#line 1352 "parser.tab.cpp"
    break;

  case 49: /* while_statement: WHILE_KEY LPAREN boolean_expression RPAREN no_decl_block  */
#line 168 "parser.y"
               { log_syntax("While statement recunoscut."); }
#line 1358 "parser.tab.cpp"
    break;

  case 50: /* block: LBRACE statement_list RBRACE  */
#line 172 "parser.y"
     { log_syntax("Block recunoscut."); }
#line 1364 "parser.tab.cpp"
    break;

  case 51: /* return_statement: RETURN_KEY expression  */
#line 176 "parser.y"
                { log_syntax("Return cu expresie recunoscut."); }
#line 1370 "parser.tab.cpp"
    break;

  case 52: /* return_statement: RETURN_KEY  */
#line 178 "parser.y"
                { log_syntax("Return VOID recunoscut."); }
#line 1376 "parser.tab.cpp"
    break;

  case 53: /* function_call_statement: IDENTIFIER LPAREN argument_list RPAREN  */
#line 182 "parser.y"
                       { log_syntax("Apel Functie simpla recunoscut: " + *((yyvsp[-3].strVal))); }
#line 1382 "parser.tab.cpp"
    break;

  case 54: /* function_call_statement: PRINT_CALL LPAREN expression RPAREN  */
#line 184 "parser.y"
                       { log_syntax("Apel Print(expr) recunoscut."); }
#line 1388 "parser.tab.cpp"
    break;

  case 55: /* function_call_statement: object_access LPAREN argument_list RPAREN  */
#line 186 "parser.y"
                       { log_syntax("Apel Metoda recunoscut."); }
#line 1394 "parser.tab.cpp"
    break;

  case 59: /* object_access: IDENTIFIER DOT IDENTIFIER  */
#line 195 "parser.y"
             { log_syntax("Object Access (obj.field/method) recunoscut: " + *((yyvsp[-2].strVal)) + "." + *((yyvsp[0].strVal))); }
#line 1400 "parser.tab.cpp"
    break;

  case 60: /* boolean_expression: expression OP_LT expression  */
#line 198 "parser.y"
                                                { log_syntax("Expresie Bool: <"); }
#line 1406 "parser.tab.cpp"
    break;

  case 61: /* boolean_expression: expression OP_GT expression  */
#line 199 "parser.y"
                                                { log_syntax("Expresie Bool: >"); }
#line 1412 "parser.tab.cpp"
    break;

  case 62: /* boolean_expression: expression OP_EQ expression  */
#line 200 "parser.y"
                                                { log_syntax("Expresie Bool: =="); }
#line 1418 "parser.tab.cpp"
    break;

  case 63: /* boolean_expression: expression OP_NEQ expression  */
#line 201 "parser.y"
                                                 { log_syntax("Expresie Bool: !="); }
#line 1424 "parser.tab.cpp"
    break;

  case 64: /* boolean_expression: boolean_expression OP_AND boolean_expression  */
#line 202 "parser.y"
                                                                 { log_syntax("Expresie Bool: &&"); }
#line 1430 "parser.tab.cpp"
    break;

  case 65: /* boolean_expression: boolean_expression OP_OR boolean_expression  */
#line 203 "parser.y"
                                                                { log_syntax("Expresie Bool: ||"); }
#line 1436 "parser.tab.cpp"
    break;

  case 66: /* boolean_expression: LPAREN boolean_expression RPAREN  */
#line 204 "parser.y"
                                                     { (yyval.exprVal) = (yyvsp[-1].exprVal); log_syntax("Expresie Bool: Paranteze"); }
#line 1442 "parser.tab.cpp"
    break;

  case 67: /* boolean_expression: BOOL_LITERAL  */
#line 205 "parser.y"
                                 { log_syntax("Expresie Bool: Literal"); ; (yyval.exprVal) = NULL;}
#line 1448 "parser.tab.cpp"
    break;

  case 68: /* expression: expression OP_ADD term  */
#line 208 "parser.y"
                                   { log_syntax("Expresie: +"); }
#line 1454 "parser.tab.cpp"
    break;

  case 69: /* expression: expression OP_SUB term  */
#line 209 "parser.y"
                                   { log_syntax("Expresie: -"); }
#line 1460 "parser.tab.cpp"
    break;

  case 71: /* term: term OP_MUL factor  */
#line 213 "parser.y"
                         { log_syntax("Expresie: *"); }
#line 1466 "parser.tab.cpp"
    break;

  case 72: /* term: term OP_DIV factor  */
#line 214 "parser.y"
                         { log_syntax("Expresie: /"); }
#line 1472 "parser.tab.cpp"
    break;

  case 74: /* factor: IDENTIFIER  */
#line 218 "parser.y"
                   { log_syntax("Expresie: Identificator"); (yyval.exprVal) = NULL; }
#line 1478 "parser.tab.cpp"
    break;

  case 75: /* factor: object_access  */
#line 219 "parser.y"
                      { log_syntax("Expresie: Acces Obiect"); }
#line 1484 "parser.tab.cpp"
    break;

  case 76: /* factor: INTEGER_LITERAL  */
#line 220 "parser.y"
                        { log_syntax("Expresie: Literal Int"); }
#line 1490 "parser.tab.cpp"
    break;

  case 77: /* factor: FLOAT_LITERAL  */
#line 221 "parser.y"
                      { log_syntax("Expresie: Literal Float"); }
#line 1496 "parser.tab.cpp"
    break;

  case 78: /* factor: STRING_LITERAL  */
#line 222 "parser.y"
                       { log_syntax("Expresie: Literal String"); }
#line 1502 "parser.tab.cpp"
    break;

  case 79: /* factor: function_call_statement  */
#line 223 "parser.y"
                                { log_syntax("Expresie: Apel Functie"); }
#line 1508 "parser.tab.cpp"
    break;

  case 80: /* factor: LPAREN expression RPAREN  */
#line 224 "parser.y"
                                 { (yyval.exprVal) = (yyvsp[-1].exprVal); log_syntax("Factor: Paranteze"); }
#line 1514 "parser.tab.cpp"
    break;


#line 1518 "parser.tab.cpp"

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

#line 227 "parser.y"


void yyerror(const char *s) {
    std::cerr << "!!! EROARE DE SINTAXA: " << s << " la linia " << yylineno << std::endl;
}

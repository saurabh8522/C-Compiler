/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 9 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lib/symbol_table.h"
#include "lib/scope.h"
#include "lib/misc.h"

#define TRACE_ENABLED false

// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

scope_node_t *curr_scope;

extern char *yytext;
extern int yylineno;

char datatype[100];
int num_params;

symbol_node_t * redefined_error_check(char *symbol);


#line 97 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SIGNED = 258,
    UNSIGNED = 259,
    LONG = 260,
    SHORT = 261,
    SWITCH = 262,
    BREAK = 263,
    CONTINUE = 264,
    CASE = 265,
    DEFAULT = 266,
    RETURN = 267,
    FOR = 268,
    WHILE = 269,
    DO = 270,
    IF = 271,
    ELSE = 272,
    CONSTANT_INTEGER = 273,
    CONSTANT_FLOAT = 274,
    CONSTANT_STRING = 275,
    CONSTANT_CHAR = 276,
    INCLUDE = 277,
    IDENTIFIER = 278,
    INT = 279,
    CHAR = 280,
    FLOAT = 281,
    DOUBLE = 282,
    VOID = 283,
    ADD_ASSIGN = 284,
    SUB_ASSIGN = 285,
    MUL_ASSIGN = 286,
    DIV_ASSIGN = 287,
    MOD_ASSIGN = 288,
    LEFT_ASSIGN = 289,
    RIGHT_ASSIGN = 290,
    AND_ASSIGN = 291,
    XOR_ASSIGN = 292,
    OR_ASSIGN = 293,
    LOGIC_AND = 294,
    LOGIC_OR = 295,
    NOT = 296,
    INCREMENT_OPERATOR = 297,
    DECREMENT_OPERATOR = 298,
    LESSER_EQUAL = 299,
    GREATER_EQUAL = 300,
    DOUBLE_EQUAL = 301,
    NOT_EQUAL = 302,
    LESSER_THAN = 303,
    GREATER_THAN = 304
  };
#endif
/* Tokens.  */
#define SIGNED 258
#define UNSIGNED 259
#define LONG 260
#define SHORT 261
#define SWITCH 262
#define BREAK 263
#define CONTINUE 264
#define CASE 265
#define DEFAULT 266
#define RETURN 267
#define FOR 268
#define WHILE 269
#define DO 270
#define IF 271
#define ELSE 272
#define CONSTANT_INTEGER 273
#define CONSTANT_FLOAT 274
#define CONSTANT_STRING 275
#define CONSTANT_CHAR 276
#define INCLUDE 277
#define IDENTIFIER 278
#define INT 279
#define CHAR 280
#define FLOAT 281
#define DOUBLE 282
#define VOID 283
#define ADD_ASSIGN 284
#define SUB_ASSIGN 285
#define MUL_ASSIGN 286
#define DIV_ASSIGN 287
#define MOD_ASSIGN 288
#define LEFT_ASSIGN 289
#define RIGHT_ASSIGN 290
#define AND_ASSIGN 291
#define XOR_ASSIGN 292
#define OR_ASSIGN 293
#define LOGIC_AND 294
#define LOGIC_OR 295
#define NOT 296
#define INCREMENT_OPERATOR 297
#define DECREMENT_OPERATOR 298
#define LESSER_EQUAL 299
#define GREATER_EQUAL 300
#define DOUBLE_EQUAL 301
#define NOT_EQUAL 302
#define LESSER_THAN 303
#define GREATER_THAN 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 53 "parser.y" /* yacc.c:355  */

	char char_ptr[100];

#line 239 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   441

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    66,     2,    55,    57,     2,
      61,    60,    53,    51,    59,    52,    67,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    29,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,    65,     2,     2,     2,     2,
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
      25,    26,    27,    28,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    76,    77,    78,    79,    80,    81,    82,
      86,    90,    91,    94,   102,   103,   106,   114,   115,   119,
     130,   146,   150,   151,   152,   153,   154,   155,   156,   157,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   173,
     173,   173,   173,   177,   183,   194,   201,   204,   207,   215,
     219,   223,   227,   228,   229,   233,   234,   235,   236,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     254,   258,   259,   260,   261,   265,   266,   267,   268,   269,
     270,   271,   275,   276,   277,   281,   282,   283,   284,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   308,   312,   317,   321,
     322,   323,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   341,   345,   346,   350,   355,   356,   360,
     361,   365,   366,   367,   371,   375,   376,   380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SIGNED", "UNSIGNED", "LONG", "SHORT",
  "SWITCH", "BREAK", "CONTINUE", "CASE", "DEFAULT", "RETURN", "FOR",
  "WHILE", "DO", "IF", "ELSE", "CONSTANT_INTEGER", "CONSTANT_FLOAT",
  "CONSTANT_STRING", "CONSTANT_CHAR", "INCLUDE", "IDENTIFIER", "INT",
  "CHAR", "FLOAT", "DOUBLE", "VOID", "'='", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "LOGIC_AND", "LOGIC_OR", "NOT",
  "INCREMENT_OPERATOR", "DECREMENT_OPERATOR", "LESSER_EQUAL",
  "GREATER_EQUAL", "DOUBLE_EQUAL", "NOT_EQUAL", "LESSER_THAN",
  "GREATER_THAN", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'", "';'",
  "','", "')'", "'('", "'['", "']'", "'{'", "'}'", "'#'", "'.'", "$accept",
  "Begin", "Declaration", "Identifier_List", "Function_Declaration",
  "Function_Definition", "Bracket_open", "Formal_Param_List", "Type",
  "Modifiers", "Array_Notation", "Define_Assign", "Param_List",
  "Assignment", "Assignment_Operator", "Expression", "Logical_Expression",
  "Relational_Expression", "Additive_Expression",
  "Multiplicative_Expression", "Primary", "Compound_Statement",
  "Scope_Start", "Scope_End", "Statement_List", "Statement",
  "Return_Statement", "While_Statement", "Do_While_Statement",
  "For_Statement", "If_Statement", "Else_Statement", "Function_Call",
  "Include_Statement", "Include", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    61,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,    43,    45,    42,    47,    37,    94,    38,    59,    44,
      41,    40,    91,    93,   123,   125,    35,    46
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      33,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
     -20,     9,    33,    33,    33,    11,   161,  -128,    33,    21,
    -128,  -128,  -128,  -128,   221,    50,    60,   -41,   382,    52,
    -128,  -128,  -128,  -128,  -128,    75,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,    39,  -128,    -8,
      82,    61,   326,    53,  -128,    39,    61,    39,   -46,   337,
    -128,    67,   105,    69,    81,    44,  -128,  -128,  -128,  -128,
      73,   274,   120,   122,   274,   274,   127,   130,   247,  -128,
    -128,   -16,   332,    -4,    66,  -128,  -128,    39,    -6,    61,
       2,  -128,  -128,  -128,  -128,   131,  -128,    93,    -9,     7,
     137,   103,  -128,  -128,    61,   332,  -128,  -128,  -128,  -128,
     101,    53,   169,   141,   393,   107,   109,    78,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,  -128,   108,   155,  -128,   113,   164,   142,  -128,  -128,
    -128,  -128,   220,    82,    12,    82,   134,   132,    61,   371,
      61,  -128,  -128,   332,   332,    -4,    -4,    -4,    -4,    -4,
      -4,    66,    66,  -128,  -128,  -128,  -128,   133,  -128,   147,
    -128,   139,   156,    61,   154,   158,   152,   160,  -128,  -128,
      39,   159,   179,   220,   157,   220,  -128,  -128,  -128,  -128,
    -128,  -128,    82,  -128,  -128,    61,  -128,    61,  -128,  -128,
    -128,  -128,  -128,   184,   293,    61,   181,    61,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,   191,  -128,
     201,   208,   214,    61,   220,    61,   220,   217,  -128,  -128,
     216,   262,   262,   293,   227,   220,  -128,  -128,   226,  -128,
    -128,  -128,   220,  -128,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    42,    41,    40,    39,    30,    33,    31,    34,    32,
       0,     0,     4,     8,     6,     0,     0,   137,     2,     0,
       1,     5,     9,     7,    15,     0,     0,     0,    11,    18,
      35,    38,    36,    37,     3,     0,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,     0,    21,     0,
      29,     0,    16,     0,    10,     0,     0,     0,     0,    15,
      12,     0,     0,    32,     0,     0,    91,    92,    94,    93,
      95,     0,     0,     0,     0,     0,     0,     0,     0,   100,
      49,    70,    71,    75,    82,    85,   101,     0,     0,     0,
       0,    14,    51,    17,   135,     0,    43,     0,     0,    23,
       0,    25,   103,   105,    54,    74,   102,   104,    99,    98,
      96,    97,    95,     0,   100,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    50,     0,     0,     0,    46,    19,
     107,    20,   111,    29,    24,    29,     0,    52,     0,    96,
       0,    90,    89,    72,    73,    79,    78,    80,    81,    77,
      76,    83,    84,    86,    87,    88,    44,     0,    45,     0,
     136,     0,     0,     0,     0,     0,     0,     0,   122,   113,
       0,     0,     0,   111,     0,   111,   118,   112,   119,   114,
     115,    26,    29,    28,   134,    54,    55,     0,    57,    47,
      48,   120,   121,     0,     0,     0,     0,     0,   116,   117,
     110,   108,   106,   109,    27,    53,    56,   123,     0,    58,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   124,
       0,   133,   133,     0,     0,     0,   130,   129,     0,   126,
     131,   132,     0,   128,   127
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,    15,   166,   -12,  -128,  -128,   263,  -127,     1,  -128,
     -15,  -128,   106,   -72,   -21,   -48,  -128,   -66,   199,   -32,
     -52,   -87,  -128,  -128,   -59,   -84,  -128,  -128,  -128,  -128,
    -128,    56,  -128,  -128,  -128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   179,    27,    13,    14,   104,    64,   180,    16,
      79,    29,   146,   181,    51,   182,    81,    82,    83,    84,
      85,   183,   142,   212,   184,   185,   186,   187,   188,   189,
     190,   236,    86,    17,    18
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    15,    19,    80,    94,   105,   115,    56,    92,    20,
      61,   141,   132,    15,    15,    15,   191,    54,   193,    15,
     135,    95,   108,   109,   118,   119,   117,    21,    22,    23,
     116,    89,    28,    34,    24,    60,     1,     2,     3,     4,
      28,   134,    28,    91,    62,    93,   133,   126,   127,   139,
     101,    65,   153,   154,   136,   140,   147,     5,     6,     7,
       8,     9,    59,   114,    25,   214,   143,    99,    26,    49,
      35,   192,    28,    52,    88,   131,   163,   164,   165,    66,
      67,    68,    69,    53,    70,     1,     2,     3,     4,   206,
     117,   148,    25,   150,   161,   162,    26,   100,    58,    10,
     196,    26,   198,    71,    72,    73,     5,     6,     7,     8,
      63,    57,    74,    75,    76,    90,   102,   103,    77,   128,
     129,   130,    78,    97,   210,   203,   213,   114,   197,   -22,
      96,   117,   218,   117,    48,    49,   -58,   228,   -58,   231,
     229,    98,   232,   106,    65,   107,    65,   147,   240,   216,
     110,   241,   219,   111,   137,   243,   138,   220,   244,   222,
     144,   238,   145,    88,   149,    28,    12,   151,   114,   152,
     114,   166,   117,   167,   117,   227,   168,   230,    12,    12,
      12,   219,   169,   117,    12,    30,    31,    32,    33,   114,
     117,   195,   170,    65,   194,   221,   199,   201,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   114,
     200,   114,   102,   103,   202,   204,   140,   208,   114,   205,
     114,   207,   211,     1,     2,     3,     4,   114,   171,   172,
      48,    49,   173,   174,   175,   176,   177,   209,    66,    67,
      68,    69,   217,   112,     5,     6,     7,     8,     9,   223,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,   224,    71,    72,    73,    66,    67,    68,    69,   225,
     112,    74,    75,   113,   226,   233,   234,    77,   178,   235,
      47,    78,    48,    49,   140,   239,   242,    50,   237,    71,
      72,    73,    66,    67,    68,    69,     0,    70,    74,    75,
     113,   215,     0,     0,    77,     0,     0,     0,    78,     0,
       0,    66,    67,    68,    69,     0,   112,    72,    73,   155,
     156,   157,   158,   159,   160,    74,    75,    76,     0,     0,
       0,    77,     0,     0,     0,    78,    72,    73,     0,     0,
       0,     0,     0,     0,    74,    75,   113,     0,     0,     0,
      77,     0,     0,     0,    78,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,   120,   121,   122,
     123,   124,   125,     0,     0,    87,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,    49,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    88,     0,     0,     0,     0,     0,     0,
       0,    55
};

static const yytype_int16 yycheck[] =
{
      15,     0,    22,    51,    50,    71,    78,    28,    56,     0,
      18,    98,    18,    12,    13,    14,   143,    58,   145,    18,
      18,    67,    74,    75,    40,    41,    78,    12,    13,    14,
      78,    52,    47,    18,    23,    47,     3,     4,     5,     6,
      55,    89,    57,    55,    52,    57,    52,    51,    52,    58,
      65,    50,   118,   119,    52,    64,   104,    24,    25,    26,
      27,    28,    23,    78,    53,   192,    59,    23,    57,    62,
      49,    59,    87,    23,    62,    87,   128,   129,   130,    18,
      19,    20,    21,    23,    23,     3,     4,     5,     6,   176,
     142,   112,    53,   114,   126,   127,    57,    53,    23,    66,
     148,    57,   150,    42,    43,    44,    24,    25,    26,    27,
      28,    59,    51,    52,    53,    62,    43,    44,    57,    53,
      54,    55,    61,    18,   183,   173,   185,   142,   149,    60,
      63,   183,   204,   185,    61,    62,    58,   224,    60,   226,
     224,    60,   226,    23,   143,    23,   145,   195,   235,   197,
      23,   235,   204,    23,    23,   242,    63,   205,   242,   207,
      23,   233,    59,    62,    23,   180,     0,    60,   183,    60,
     185,    63,   224,    18,   226,   223,    63,   225,    12,    13,
      14,   233,    18,   235,    18,    24,    25,    26,    27,   204,
     242,    59,    50,   192,    60,    14,    63,    58,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   224,
      63,   226,    43,    44,    58,    61,    64,    58,   233,    61,
     235,    61,    65,     3,     4,     5,     6,   242,     8,     9,
      61,    62,    12,    13,    14,    15,    16,    58,    18,    19,
      20,    21,    58,    23,    24,    25,    26,    27,    28,    58,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    60,    42,    43,    44,    18,    19,    20,    21,    61,
      23,    51,    52,    53,    60,    58,    60,    57,    58,    17,
      59,    61,    61,    62,    64,    58,    60,    24,   232,    42,
      43,    44,    18,    19,    20,    21,    -1,    23,    51,    52,
      53,   195,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    18,    19,    20,    21,    -1,    23,    43,    44,   120,
     121,   122,   123,   124,   125,    51,    52,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    61,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    61,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    45,    46,    47,
      48,    49,    50,    -1,    -1,    59,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    24,    25,    26,    27,    28,
      66,    69,    70,    72,    73,    76,    77,   101,   102,    22,
       0,    69,    69,    69,    23,    53,    57,    71,    78,    79,
      24,    25,    26,    27,    69,    49,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    59,    61,    62,
      74,    82,    23,    23,    58,    59,    82,    59,    23,    23,
      71,    18,    52,    28,    75,    76,    18,    19,    20,    21,
      23,    42,    43,    44,    51,    52,    53,    57,    61,    78,
      83,    84,    85,    86,    87,    88,   100,    59,    62,    82,
      62,    71,    83,    71,    50,    67,    63,    18,    60,    23,
      53,    78,    43,    44,    74,    85,    23,    23,    88,    88,
      23,    23,    23,    53,    78,    81,    83,    88,    40,    41,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    71,    18,    52,    83,    18,    52,    23,    63,    58,
      64,    89,    90,    59,    23,    59,    80,    83,    82,    23,
      82,    60,    60,    85,    85,    86,    86,    86,    86,    86,
      86,    87,    87,    88,    88,    88,    63,    18,    63,    18,
      50,     8,     9,    12,    13,    14,    15,    16,    58,    70,
      76,    81,    83,    89,    92,    93,    94,    95,    96,    97,
      98,    75,    59,    75,    60,    59,    83,    82,    83,    63,
      63,    58,    58,    83,    61,    61,    89,    61,    58,    58,
      92,    65,    91,    92,    75,    80,    83,    58,    81,    88,
      83,    14,    83,    58,    60,    61,    60,    83,    89,    93,
      83,    89,    93,    58,    60,    17,    99,    99,    81,    58,
      89,    93,    60,    89,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      73,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    90,    91,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    95,    95,    96,    97,    97,    98,
      98,    99,    99,    99,   100,   101,   101,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       3,     1,     3,     4,     3,     1,     2,     3,     1,     6,
       6,     1,     1,     2,     3,     2,     4,     5,     4,     0,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     4,     5,     5,     5,     6,     6,     3,
       4,     3,     1,     3,     0,     3,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     2,     2,     2,     2,     3,     1,     1,     2,
       2,     0,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     3,     5,     5,     7,     9,     9,     6,
       6,     2,     2,     0,     4,     5,     7,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 12:
#line 91 "parser.y" /* yacc.c:1646  */
    {   redeclaration_error_check((yyvsp[-2].char_ptr));
                                                symbol_table_insert(symbol_table,(yyvsp[-2].char_ptr) , curr_scope->scope_num, datatype, "", yylineno);
                                            }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "parser.y" /* yacc.c:1646  */
    {
                                                redeclaration_error_check((yyvsp[-2].char_ptr));
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                symbol_table_insert(symbol_table,(yyvsp[-2].char_ptr) , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            }
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 103 "parser.y" /* yacc.c:1646  */
    {   
                                                redeclaration_error_check((yyvsp[0].char_ptr));
                                                symbol_table_insert(symbol_table,(yyvsp[0].char_ptr) , curr_scope->scope_num, datatype, "", yylineno);}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "parser.y" /* yacc.c:1646  */
    {
                                                redeclaration_error_check((yyvsp[0].char_ptr));
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                symbol_table_insert(symbol_table,(yyvsp[0].char_ptr) , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            }
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "parser.y" /* yacc.c:1646  */
    {          
                                                        redeclaration_error_check((yyvsp[-4].char_ptr));                  
                                                        char funcType[100] = "Function: ";
                                                        strcat(funcType, datatype);
                                                        symbol_node_t *node = symbol_table_insert(symbol_table,(yyvsp[-4].char_ptr), curr_scope->scope_num, funcType, "", yylineno);
                                                        node->is_function_defined = false;
                                                        node->num_params = num_params;
                                                    }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "parser.y" /* yacc.c:1646  */
    {          
                                                                            symbol_node_t *node = redefined_error_check((yyvsp[-4].char_ptr));
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            if(!node) {
                                                                                symbol_node_t *node = symbol_table_insert(symbol_table,(yyvsp[-4].char_ptr), curr_scope->scope_num, funcType, "", yylineno);
                                                                                node->num_params = num_params;
                                                                            }
                                                                            else {
                                                                                node->is_function_defined = true;
                                                                                node->num_params = num_params;
                                                                            }
                                                                        }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 146 "parser.y" /* yacc.c:1646  */
    { num_params = 0; }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "parser.y" /* yacc.c:1646  */
    { num_params++; void_param_check((yyvsp[-1].char_ptr)); symbol_table_insert(symbol_table,(yyvsp[0].char_ptr) , curr_scope->scope_num, (yyvsp[-1].char_ptr), "", yylineno);trace("Formal_Param_List Rule 1\n");}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 152 "parser.y" /* yacc.c:1646  */
    { num_params++; void_param_check((yyvsp[-2].char_ptr)); symbol_table_insert(symbol_table,(yyvsp[0].char_ptr) , curr_scope->scope_num, (yyvsp[-2].char_ptr), "", yylineno);trace("Formal_Param_List Rule 2\n");}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "parser.y" /* yacc.c:1646  */
    { num_params++; void_param_check((yyvsp[-1].char_ptr)); trace("Formal_Param_List Rule 3\n");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "parser.y" /* yacc.c:1646  */
    { num_params++; void_param_check((yyvsp[-3].char_ptr)); symbol_table_insert(symbol_table,(yyvsp[-2].char_ptr) , curr_scope->scope_num, (yyvsp[-3].char_ptr), "", yylineno);trace("Formal_Param_List Rule 4\n");}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 155 "parser.y" /* yacc.c:1646  */
    { num_params++; void_param_check((yyvsp[-4].char_ptr)); symbol_table_insert(symbol_table,(yyvsp[-2].char_ptr) , curr_scope->scope_num, (yyvsp[-4].char_ptr), "", yylineno);trace("Formal_Param_List Rule 5\n");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 156 "parser.y" /* yacc.c:1646  */
    { num_params++; void_param_check((yyvsp[-3].char_ptr)); trace("Formal_Param_List Rule 6\n");}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 161 "parser.y" /* yacc.c:1646  */
    { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 162 "parser.y" /* yacc.c:1646  */
    { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 163 "parser.y" /* yacc.c:1646  */
    { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 164 "parser.y" /* yacc.c:1646  */
    { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 165 "parser.y" /* yacc.c:1646  */
    { strcpy((yyval.char_ptr), (yyvsp[0].char_ptr)); strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "parser.y" /* yacc.c:1646  */
    { strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "parser.y" /* yacc.c:1646  */
    { strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 168 "parser.y" /* yacc.c:1646  */
    { strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 169 "parser.y" /* yacc.c:1646  */
    { strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 177 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        arr_dimension_check((yyvsp[-3].char_ptr), (yyvsp[-1].char_ptr));
                                        symbol_table_insert(symbol_table,(yyvsp[-3].char_ptr), curr_scope->scope_num, arrayType, (yyvsp[-1].char_ptr), yylineno);
                                        arr_subscript_check((yyvsp[-3].char_ptr));
                                    }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 183 "parser.y" /* yacc.c:1646  */
    {   
                                        redeclaration_error_check((yyvsp[-3].char_ptr));
                                        arr_dimension_check((yyvsp[-3].char_ptr), (yyvsp[-1].char_ptr));
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        symbol_table_insert(symbol_table,(yyvsp[-3].char_ptr), curr_scope->scope_num, arrayType, (yyvsp[-1].char_ptr), yylineno);
                                        datatype[len] = '\0';
                                        arr_subscript_check((yyvsp[-3].char_ptr));
                                    }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 194 "parser.y" /* yacc.c:1646  */
    {
                                        redeclaration_error_check((yyvsp[-3].char_ptr));
                                        arr_dimension_check((yyvsp[-3].char_ptr), (yyvsp[-1].char_ptr));
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        symbol_table_insert(symbol_table,(yyvsp[-3].char_ptr), curr_scope->scope_num, arrayType, (yyvsp[-1].char_ptr), yylineno);
                                        arr_subscript_check((yyvsp[-3].char_ptr));
                                    }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "parser.y" /* yacc.c:1646  */
    {   
                                        yyerror(strcat((yyvsp[-4].char_ptr), " has non-positive array size"));
                                    }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 204 "parser.y" /* yacc.c:1646  */
    {   
                                        yyerror(strcat((yyvsp[-4].char_ptr), " has non-positive array size"));
                                    }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 207 "parser.y" /* yacc.c:1646  */
    {
                                        yyerror(strcat((yyvsp[-4].char_ptr), " has non-positive array size"));
                                    }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 215 "parser.y" /* yacc.c:1646  */
    {
                                                                //redeclaration_error_check($1);
                                                                symbol_table_insert(symbol_table,(yyvsp[-2].char_ptr) , curr_scope->scope_num, datatype, "", yylineno);trace("Define_Assign Rule 1\n");
                                                            }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 219 "parser.y" /* yacc.c:1646  */
    {
                                                                //redeclaration_error_check($2);
                                                                symbol_table_insert(symbol_table,(yyvsp[-2].char_ptr) , curr_scope->scope_num, datatype, "", yylineno);
                                                            }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 227 "parser.y" /* yacc.c:1646  */
    { num_params++; }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 228 "parser.y" /* yacc.c:1646  */
    { num_params++; }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 233 "parser.y" /* yacc.c:1646  */
    { scope_error_check((yyvsp[-2].char_ptr)); trace("Assignment Rule 1\n");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "parser.y" /* yacc.c:1646  */
    { scope_error_check((yyvsp[-2].char_ptr)); trace("Assignment Rule 2\n");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 235 "parser.y" /* yacc.c:1646  */
    { trace("Array Element Assign Rule"); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 290 "parser.y" /* yacc.c:1646  */
    {symbol_table_insert(constant_table, (yyvsp[0].char_ptr), -1, "int", "", yylineno); trace("CONSTANT_INTEGER\n");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 291 "parser.y" /* yacc.c:1646  */
    {symbol_table_insert(constant_table, (yyvsp[0].char_ptr), -1, "float", "", yylineno); trace("CONSTANT_FLOAT\n");}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 292 "parser.y" /* yacc.c:1646  */
    {symbol_table_insert(constant_table, (yyvsp[0].char_ptr), -1, "char", "", yylineno); trace("CONSTANT_CHAR\n");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 293 "parser.y" /* yacc.c:1646  */
    {symbol_table_insert(constant_table, (yyvsp[0].char_ptr), -1, "string", "", yylineno); trace("CONSTANT_STRING\n");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 294 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[0].char_ptr));trace("Primary Identifier\n");}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 295 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[0].char_ptr));trace("Pointer Identifier\n");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 296 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[0].char_ptr));trace("Address of Identifier\n");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 301 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[0].char_ptr));}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 302 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[-1].char_ptr));}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 303 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[0].char_ptr));}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 304 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[-1].char_ptr));}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 312 "parser.y" /* yacc.c:1646  */
    {   curr_scope = add_child_scope(curr_scope);   }
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 317 "parser.y" /* yacc.c:1646  */
    {   curr_scope = goto_parent_scope(curr_scope);   }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 341 "parser.y" /* yacc.c:1646  */
    {trace("Return_Statement Call\n");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 371 "parser.y" /* yacc.c:1646  */
    { scope_error_check((yyvsp[-3].char_ptr)); num_param_check((yyvsp[-3].char_ptr)); check_is_function((yyvsp[-3].char_ptr)); /*symbol_table_insert(symbol_table, $1, curr_scope->scope_num, "Function", "", yylineno);trace("Function Call\n"); */}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 375 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[-1].char_ptr));}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 376 "parser.y" /* yacc.c:1646  */
    {scope_error_check((yyvsp[-3].char_ptr));scope_error_check((yyvsp[-1].char_ptr));}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1936 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 384 "parser.y" /* yacc.c:1906  */


inline void scope_error_check(char *symbol){
    if(!scope_check(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " not found in current or ancestor scopes"));
    }
}

inline void num_param_check(char *symbol) {

    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    if(node != NULL && num_params > node->num_params) {
        char msg[100] = "Too many arguments passed to ";
        yyerror(strcat(msg, symbol));
    }
    else if(node != NULL && num_params < node->num_params) {
        char msg[100] = "Too few arguments passed to ";
        yyerror(strcat(msg, symbol));
    }
}

inline void redeclaration_error_check(char *symbol){
    if(check_in_current_scope(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " already declared in current scope"));
    }
}

symbol_node_t * redefined_error_check(char *symbol){
    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    if(node != NULL && node->is_function_defined)
        yyerror(strcat(symbol, " is a redefinition"));

    return node;
}

inline void arr_dimension_check(char *symbol, char *arr_size){
    if(atoi(arr_size) < 1){
        yyerror(strcat(symbol, " has non-positive array size"));
    }
}

inline void arr_subscript_check(char *symbol){
    symbol_node_t *node = symbol_table_lookup(symbol_table, symbol);
    if(!strstr(node->type, "Array")){
        yyerror(strcat(symbol, " is not an array"));
    }
}

inline void void_param_check(char *type) {
    if(!strcmp(type, "void")) {
        yyerror("Parameter of function has void datatype");
    }
}

inline void check_is_function(char *func_name) {
    
    symbol_node_t *node = symbol_table_lookup(symbol_table, func_name);
    if(node == NULL) {
        yyerror(strcat(func_name, " function not declared"));                                        
    }
    if(!strstr(node->type, "Function")) {
        yyerror(strcat(func_name, " is not a function"));
    }
}

inline void trace(char *s){
    if(TRACE_ENABLED)
        fprintf(stderr, FORE_CYN "%-20.20s%20.20s%20d\n" RESET, s, yytext, yylineno);
}


int main()
{
    curr_scope = init_scope();    
    symbol_table_initialize(symbol_table);
    symbol_table_initialize(constant_table);

    yyparse();

    symbol_table_print(symbol_table, "Symbol Table");
    symbol_table_print(constant_table, "Constant Table");
    printf(FORE_GRN "\n\n Parsing complete  ✔ \n\n" RESET); 
    
    symbol_table_free(symbol_table);
    symbol_table_free(constant_table);
    // TODO: Free Scope
    
    return 0;
}


void yyerror(const char *s) {
	printf(FORE_RED "%d : %s %s\n" RESET, yylineno, s, yytext );
    printf(FORE_RED "\nParsing failed ✘ \n\n" RESET);
    exit(-2);
}

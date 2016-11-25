
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Module3.y"

// Bison code to parse decaf
#include "Module3.h"
#include <cstdio>
#include<string.h>
#include<fstream>
#include <iostream>
using namespace std;

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;
string output = "";
string localType = "";
int declarationCount = 0;
int methodCount = 0;
void yyerror(const char *s);
fstream fout("XML_visitor.txt",ios::out);


/* Line 189 of yacc.c  */
#line 95 "Module3.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Class = 258,
     ProgramString = 259,
     Identifier = 260,
     OpenBracket = 261,
     CloseBracket = 262,
     OpenSquare = 263,
     CloseSquare = 264,
     SemiColon = 265,
     OpenParen = 266,
     CloseParen = 267,
     Comma = 268,
     Void = 269,
     Break = 270,
     Callout = 271,
     Continue = 272,
     Else = 273,
     Return = 274,
     Equal = 275,
     PlusEqual = 276,
     MinusEqual = 277,
     For = 278,
     If = 279,
     Int = 280,
     Boolean = 281,
     Decimal_literal = 282,
     Hex_literal = 283,
     Char_literal = 284,
     String_literal = 285,
     True = 286,
     False = 287,
     ConditionalOr = 288,
     ConditionalAnd = 289,
     NotEqualTo = 290,
     EqualTo = 291,
     GreaterThan = 292,
     GreaterThanEqual = 293,
     LessThanEqual = 294,
     LessThan = 295,
     Minus = 296,
     Addition = 297,
     Remainder = 298,
     Division = 299,
     Multiplication = 300,
     Negation = 301,
     UMinus = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 22 "Module3.y"

	Node *astNode;
	int ival;
	char *sval;



/* Line 214 of yacc.c  */
#line 186 "Module3.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "Module3.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  159

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    13,    14,    18,    20,    24,    26,
      31,    34,    35,    42,    48,    55,    61,    64,    69,    74,
      77,    78,    82,    84,    88,    91,    92,    97,   100,   106,
     114,   122,   125,   129,   132,   135,   137,   142,   146,   151,
     158,   160,   164,   166,   168,   173,   175,   177,   181,   185,
     187,   189,   191,   195,   199,   203,   207,   211,   215,   219,
     223,   227,   231,   235,   239,   243,   246,   249,   253,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   273,   275
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     3,     4,     6,    50,    54,     7,    -1,
      50,    51,    -1,    -1,    72,    52,    10,    -1,    53,    -1,
      52,    13,    53,    -1,     5,    -1,     5,     8,    71,     9,
      -1,    55,    54,    -1,    -1,    72,     5,    11,    56,    12,
      57,    -1,    72,     5,    11,    12,    57,    -1,    14,     5,
      11,    56,    12,    57,    -1,    14,     5,    11,    12,    57,
      -1,    72,     5,    -1,    72,     5,    13,    56,    -1,     6,
      58,    61,     7,    -1,    59,    58,    -1,    -1,    72,    60,
      10,    -1,     5,    -1,     5,    13,    60,    -1,    62,    61,
      -1,    -1,    66,    73,    68,    10,    -1,    63,    10,    -1,
      24,    11,    68,    12,    57,    -1,    24,    11,    68,    12,
      57,    18,    57,    -1,    23,     5,    20,    68,    13,    68,
      57,    -1,    19,    10,    -1,    19,    68,    10,    -1,    15,
      10,    -1,    17,    10,    -1,    57,    -1,    65,    11,    64,
      12,    -1,    65,    11,    12,    -1,    16,    11,    30,    12,
      -1,    16,    11,    30,    13,    67,    12,    -1,    68,    -1,
      68,    13,    64,    -1,     5,    -1,     5,    -1,     5,     8,
      68,     9,    -1,    68,    -1,    30,    -1,    68,    13,    67,
      -1,    30,    13,    67,    -1,    66,    -1,    63,    -1,    69,
      -1,    68,    33,    68,    -1,    68,    34,    68,    -1,    68,
      36,    68,    -1,    68,    35,    68,    -1,    68,    40,    68,
      -1,    68,    39,    68,    -1,    68,    38,    68,    -1,    68,
      37,    68,    -1,    68,    42,    68,    -1,    68,    41,    68,
      -1,    68,    45,    68,    -1,    68,    44,    68,    -1,    68,
      43,    68,    -1,    41,    68,    -1,    46,    68,    -1,    11,
      68,    12,    -1,    71,    -1,    29,    -1,    70,    -1,    31,
      -1,    32,    -1,    27,    -1,    28,    -1,    25,    -1,    26,
      -1,    20,    -1,    21,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    48,    49,    52,    55,    56,    59,    61,
      65,    66,    69,    71,    73,    75,    79,    81,    85,    88,
      89,    92,    95,    97,   101,   102,   105,   107,   109,   111,
     113,   115,   117,   119,   121,   123,   127,   128,   129,   131,
     135,   136,   139,   142,   144,   148,   149,   151,   152,   156,
     157,   158,   159,   161,   163,   165,   167,   169,   171,   173,
     175,   177,   179,   181,   183,   185,   187,   189,   193,   195,
     197,   201,   202,   205,   206,   209,   210,   213,   214,   215
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Class", "ProgramString", "Identifier",
  "OpenBracket", "CloseBracket", "OpenSquare", "CloseSquare", "SemiColon",
  "OpenParen", "CloseParen", "Comma", "Void", "Break", "Callout",
  "Continue", "Else", "Return", "Equal", "PlusEqual", "MinusEqual", "For",
  "If", "Int", "Boolean", "Decimal_literal", "Hex_literal", "Char_literal",
  "String_literal", "True", "False", "ConditionalOr", "ConditionalAnd",
  "NotEqualTo", "EqualTo", "GreaterThan", "GreaterThanEqual",
  "LessThanEqual", "LessThan", "Minus", "Addition", "Remainder",
  "Division", "Multiplication", "Negation", "UMinus", "$accept", "Program",
  "field_decls", "field_decl", "Identifiers", "Identifier1",
  "method_decls", "method_decl", "Params", "Block", "var_decls",
  "var_decl", "decls", "Statements", "Statement", "Method_call",
  "PassParams", "Method_name", "Location", "CalloutArgs", "Expr",
  "Literal", "Bool_literal", "Int_literal", "Type", "Assign_op", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    56,    56,    57,    58,
      58,    59,    60,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    66,    66,    67,    67,    67,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     0,     3,     1,     3,     1,     4,
       2,     0,     6,     5,     6,     5,     2,     4,     4,     2,
       0,     3,     1,     3,     2,     0,     4,     2,     5,     7,
       7,     2,     3,     2,     2,     1,     4,     3,     4,     6,
       1,     3,     1,     1,     4,     1,     1,     3,     3,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,    11,     0,    75,    76,
       3,     0,    11,     0,     0,     2,    10,     0,     8,     0,
       6,     0,     0,     0,     0,     5,     0,     0,     0,     0,
      73,    74,     0,     0,     0,     8,     7,    20,    15,     0,
      16,     9,    13,     0,    25,    20,     0,    14,     0,    12,
      43,     0,     0,     0,     0,     0,     0,    35,     0,    25,
       0,     0,     0,    19,    22,     0,    17,     0,    33,     0,
      34,    31,     0,    69,    71,    72,     0,     0,    50,    49,
       0,    51,    70,    68,     0,     0,    18,    24,    27,     0,
      77,    78,    79,     0,     0,    21,     0,     0,     0,    65,
      66,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,     0,    40,
       0,    23,    44,    38,     0,    67,    52,    53,    55,    54,
      59,    58,    57,    56,    61,    60,    64,    63,    62,     0,
       0,    36,     0,    26,    46,     0,    45,     0,    28,    41,
       0,    39,     0,     0,     0,    48,    47,    30,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    10,    19,    20,    11,    12,    28,    57,
      44,    45,    65,    58,    59,    78,   118,    61,    79,   145,
     146,    81,    82,    83,    29,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
      12,    24,    17,    31,  -142,  -142,    13,    41,  -142,  -142,
    -142,    60,    13,    88,    86,  -142,  -142,    99,    34,    55,
    -142,    -4,    95,   -24,    51,  -142,   102,   103,    96,   105,
    -142,  -142,   108,   103,   100,   112,  -142,    70,  -142,   103,
      98,  -142,  -142,   103,   361,    70,   116,  -142,    70,  -142,
      36,   114,   111,   115,    59,   125,   120,  -142,   128,   361,
     122,   126,    63,  -142,   123,   129,  -142,     2,  -142,   110,
    -142,  -142,     2,  -142,  -142,  -142,     2,     2,  -142,  -142,
     181,  -142,  -142,  -142,   121,     2,  -142,  -142,  -142,    87,
    -142,  -142,  -142,     2,   116,  -142,   145,    89,   228,  -142,
    -142,  -142,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   241,  -142,   130,   274,
     194,  -142,  -142,  -142,   118,  -142,   158,   206,   168,   168,
      37,    37,    37,    37,    28,    28,  -142,  -142,  -142,   287,
     103,  -142,     2,  -142,   131,   139,   320,     2,   134,  -142,
     118,  -142,   118,   132,   103,  -142,  -142,  -142,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,  -142,  -142,   117,   141,  -142,   -22,   -27,
     113,  -142,    61,    97,  -142,   -39,    15,  -142,   -34,  -141,
     -53,  -142,  -142,   137,    29,  -142
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -43
static const yytype_int16 yytable[] =
{
      38,    80,    34,    30,    31,    60,    42,    50,    27,   155,
      62,   156,    47,    72,    96,     1,    49,     4,    52,    98,
      60,     8,     9,    99,   100,    62,    66,     7,     3,    30,
      31,    73,   116,    74,    75,    13,   119,     5,     8,     9,
     120,    17,    23,    76,    67,    24,    14,   -42,    77,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,    33,    50,    25,    46,    15,    26,    71,
      72,   112,   113,   114,    46,    52,     8,     9,   110,   111,
     112,   113,   114,    90,    91,    92,    30,    31,    73,   119,
      74,    75,    50,    18,   153,     8,     9,    21,    72,   117,
      76,   123,   124,    52,    22,    77,    24,    35,    39,    37,
      40,    48,    43,   148,    30,    31,    73,    41,    74,    75,
      23,    64,    69,    50,    68,    70,   157,   158,    76,    72,
      84,    85,    88,    77,    52,    86,    94,    89,    37,    95,
      97,   115,   141,    36,   150,    30,    31,    73,   144,    74,
      75,   151,   154,    16,   122,   121,    87,   149,    63,    76,
      32,     0,     0,     0,    77,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   101,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   143,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     125,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,     0,   140,     0,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    50,    37,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,     0,
      54,     0,     0,     0,    55,    56
};

static const yytype_int16 yycheck[] =
{
      27,    54,    24,    27,    28,    44,    33,     5,    12,   150,
      44,   152,    39,    11,    67,     3,    43,     0,    16,    72,
      59,    25,    26,    76,    77,    59,    48,    14,     4,    27,
      28,    29,    85,    31,    32,     6,    89,     6,    25,    26,
      93,    12,     8,    41,     8,    11,     5,    11,    46,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    12,     5,    10,    37,     7,    13,    10,
      11,    43,    44,    45,    45,    16,    25,    26,    41,    42,
      43,    44,    45,    20,    21,    22,    27,    28,    29,   142,
      31,    32,     5,     5,   147,    25,    26,    11,    11,    12,
      41,    12,    13,    16,     5,    46,    11,     5,    12,     6,
       5,    13,    12,   140,    27,    28,    29,     9,    31,    32,
       8,     5,    11,     5,    10,    10,   153,   154,    41,    11,
       5,    11,    10,    46,    16,     7,    13,    11,     6,    10,
      30,    20,    12,    26,    13,    27,    28,    29,    30,    31,
      32,    12,    18,    12,     9,    94,    59,   142,    45,    41,
      23,    -1,    -1,    -1,    46,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    10,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    10,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      12,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    -1,
      19,    -1,    -1,    -1,    23,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,     4,     0,     6,    50,    14,    25,    26,
      51,    54,    55,    72,     5,     7,    54,    72,     5,    52,
      53,    11,     5,     8,    11,    10,    13,    12,    56,    72,
      27,    28,    71,    12,    56,     5,    53,     6,    57,    12,
       5,     9,    57,    12,    58,    59,    72,    57,    13,    57,
       5,    15,    16,    17,    19,    23,    24,    57,    61,    62,
      63,    65,    66,    58,     5,    60,    56,     8,    10,    11,
      10,    10,    11,    29,    31,    32,    41,    46,    63,    66,
      68,    69,    70,    71,     5,    11,     7,    61,    10,    11,
      20,    21,    22,    73,    13,    10,    68,    30,    68,    68,
      68,    10,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    20,    68,    12,    64,    68,
      68,    60,     9,    12,    13,    12,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      12,    12,    13,    10,    30,    67,    68,    13,    57,    64,
      13,    12,    13,    68,    18,    67,    67,    57,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 45 "Module3.y"
    { (yyval.astNode) = new ProgramNode((yyvsp[(4) - (6)].astNode), (yyvsp[(5) - (6)].astNode)); Visitor visitor; (yyval.astNode)->display(visitor, ""); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 48 "Module3.y"
    { (yyval.astNode) = new FieldDeclsNode((yyvsp[(1) - (2)].astNode),(yyvsp[(2) - (2)].astNode)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 49 "Module3.y"
    { (yyval.astNode) = new FieldDeclsNode(NULL, NULL); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 52 "Module3.y"
    { (yyval.astNode) = new FieldDeclsNode((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].astNode)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 55 "Module3.y"
    { (yyval.astNode) = new IdentifiersNode((yyvsp[(1) - (1)].astNode), NULL); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 56 "Module3.y"
    { (yyval.astNode) = new IdentifiersNode((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode)); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 60 "Module3.y"
    { (yyval.astNode) = new Identifier1Node(new IdentifierNode((yyvsp[(1) - (1)].sval)), NULL); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 62 "Module3.y"
    { (yyval.astNode) = new Identifier1Node(new IdentifierNode((yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].astNode)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "Module3.y"
    { (yyval.astNode) = new MethodDeclsNode((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].astNode)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 66 "Module3.y"
    { (yyval.astNode) = new MethodDeclsNode(NULL, NULL); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 70 "Module3.y"
    { (yyval.astNode) = new MethodDeclNode((yyvsp[(1) - (6)].astNode), new IdentifierNode((yyvsp[(2) - (6)].sval)), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 72 "Module3.y"
    { (yyval.astNode) = new MethodDeclNode((yyvsp[(1) - (5)].astNode), new IdentifierNode((yyvsp[(2) - (5)].sval)), NULL, (yyvsp[(5) - (5)].astNode)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 74 "Module3.y"
    { (yyval.astNode) = new MethodDeclNode(NULL, new IdentifierNode((yyvsp[(2) - (6)].sval)), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 76 "Module3.y"
    { (yyval.astNode) = new MethodDeclNode(NULL, new IdentifierNode((yyvsp[(2) - (5)].sval)), NULL, (yyvsp[(5) - (5)].astNode)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 80 "Module3.y"
    { (yyval.astNode) = new ParamsNode((yyvsp[(1) - (2)].astNode), new IdentifierNode((yyvsp[(2) - (2)].sval)), NULL); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 82 "Module3.y"
    { (yyval.astNode) = new ParamsNode((yyvsp[(1) - (4)].astNode), new IdentifierNode((yyvsp[(2) - (4)].sval)), (yyvsp[(4) - (4)].astNode)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 85 "Module3.y"
    { (yyval.astNode) = new BlockNode((yyvsp[(2) - (4)].astNode), (yyvsp[(3) - (4)].astNode)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 88 "Module3.y"
    { (yyval.astNode) = new VarDeclsNode((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].astNode)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 89 "Module3.y"
    { (yyval.astNode) = new VarDeclsNode(NULL, NULL); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 92 "Module3.y"
    { (yyval.astNode) = new VarDeclNode((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].astNode)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 96 "Module3.y"
    { (yyval.astNode) = new DeclsNode(new IdentifierNode((yyvsp[(1) - (1)].sval)), NULL); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 98 "Module3.y"
    { (yyval.astNode) = new DeclsNode(new IdentifierNode((yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].astNode)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 101 "Module3.y"
    { (yyval.astNode) = new StatementsNode((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].astNode)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 102 "Module3.y"
    { (yyval.astNode) = new StatementsNode(NULL, NULL); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "Module3.y"
    { (yyval.astNode) = new StatementNode((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].astNode), (yyvsp[(3) - (4)].astNode), NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 108 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, (yyvsp[(1) - (2)].astNode), NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 110 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, (yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 112 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, (yyvsp[(3) - (7)].astNode), (yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 114 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, NULL, NULL, NULL, new IdentifierNode((yyvsp[(2) - (7)].sval)), (yyvsp[(4) - (7)].astNode), (yyvsp[(6) - (7)].astNode), (yyvsp[(7) - (7)].astNode), NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 116 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, new ReturnStrNode((yyvsp[(1) - (2)].sval)), NULL, NULL, NULL, NULL); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 118 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, new ReturnStrNode((yyvsp[(1) - (3)].sval)), (yyvsp[(2) - (3)].astNode), NULL, NULL, NULL); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 120 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, new BreakStrNode((yyvsp[(1) - (2)].sval)), NULL, NULL); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 122 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, new ContinueStrNode((yyvsp[(1) - (2)].sval)), NULL); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 124 "Module3.y"
    { (yyval.astNode) = new StatementNode(NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, (yyvsp[(1) - (1)].astNode)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 127 "Module3.y"
    { (yyval.astNode) = new MethodCallNode((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), NULL, NULL); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 128 "Module3.y"
    { (yyval.astNode) = new MethodCallNode((yyvsp[(1) - (3)].astNode), NULL, NULL, NULL); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 130 "Module3.y"
    { (yyval.astNode) = new MethodCallNode(NULL, NULL, new StringLiteralNode((yyvsp[(3) - (4)].sval)), NULL); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 132 "Module3.y"
    { (yyval.astNode) = new MethodCallNode(NULL, NULL, new StringLiteralNode((yyvsp[(3) - (6)].sval)), (yyvsp[(5) - (6)].astNode)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 135 "Module3.y"
    { (yyval.astNode) = new PassParamsNode((yyvsp[(1) - (1)].astNode), NULL); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 136 "Module3.y"
    { (yyval.astNode) = new PassParamsNode((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 139 "Module3.y"
    { (yyval.astNode) = new MethodNameNode(new IdentifierNode((yyvsp[(1) - (1)].sval))); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 143 "Module3.y"
    { (yyval.astNode) = new LocationNode(new IdentifierNode((yyvsp[(1) - (1)].sval)), NULL); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 145 "Module3.y"
    { (yyval.astNode) = new LocationNode(new IdentifierNode((yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].astNode)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 148 "Module3.y"
    { (yyval.astNode) = new CalloutArgsNode((yyvsp[(1) - (1)].astNode), NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 150 "Module3.y"
    { (yyval.astNode) = new CalloutArgsNode(NULL, new StringLiteralNode((yyvsp[(1) - (1)].sval)), NULL, NULL, NULL, NULL); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 151 "Module3.y"
    { (yyval.astNode) = new CalloutArgsNode(NULL, NULL, (yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), NULL, NULL); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 153 "Module3.y"
    { (yyval.astNode) = new CalloutArgsNode(NULL, NULL, NULL, NULL, new StringLiteralNode((yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].astNode)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 156 "Module3.y"
    { (yyval.astNode) = new ExprNode((yyvsp[(1) - (1)].astNode), NULL, NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 157 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, (yyvsp[(1) - (1)].astNode), NULL, NULL, NULL, NULL, NULL); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 158 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, (yyvsp[(1) - (1)].astNode), NULL, NULL, NULL, NULL); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 160 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 162 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 164 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 166 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 168 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 170 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 172 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 174 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 176 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 178 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 180 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 182 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 184 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, (yyvsp[(1) - (3)].astNode), new OperatorNode((yyvsp[(2) - (3)].sval)), (yyvsp[(3) - (3)].astNode), NULL); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 186 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, NULL, new OperatorNode((yyvsp[(1) - (2)].sval)), (yyvsp[(2) - (2)].astNode), NULL); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 188 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, NULL, new OperatorNode((yyvsp[(1) - (2)].sval)), (yyvsp[(2) - (2)].astNode), NULL); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 190 "Module3.y"
    { (yyval.astNode) = new ExprNode(NULL, NULL, NULL, NULL, NULL, NULL, (yyvsp[(2) - (3)].astNode)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 194 "Module3.y"
    { (yyval.astNode) = new LiteralNode((yyvsp[(1) - (1)].astNode), NULL, NULL); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 196 "Module3.y"
    { (yyval.astNode) = new LiteralNode(NULL, new CharLiteralNode((yyvsp[(1) - (1)].sval)), NULL); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 198 "Module3.y"
    { (yyval.astNode) = new LiteralNode(NULL, NULL, (yyvsp[(1) - (1)].astNode)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 201 "Module3.y"
    { (yyval.astNode) = new BoolLiteralNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 202 "Module3.y"
    { (yyval.astNode) = new BoolLiteralNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 205 "Module3.y"
    { (yyval.astNode) = new IntLiteralNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 206 "Module3.y"
    { (yyval.astNode) = new IntLiteralNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 209 "Module3.y"
    { (yyval.astNode) = new TypeNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 210 "Module3.y"
    { (yyval.astNode) = new TypeNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 213 "Module3.y"
    { (yyval.astNode) = new AssignOpNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 214 "Module3.y"
    { (yyval.astNode) = new AssignOpNode((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 215 "Module3.y"
    { (yyval.astNode) = new AssignOpNode((yyvsp[(1) - (1)].sval)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2122 "Module3.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 216 "Module3.y"


int main(int argc, char** argv) 
{
	FILE *myfile = fopen(argv[1], "r");
	if (!myfile) 
	{
		cout << "I can't open input file!" << endl;
		return -1;
	}
	yyin = myfile;
	do 
	{
		yyparse();
	} while (!feof(yyin));
	fout.close();
	cout<<"Success\n";
	return 0;
}

void yyerror(const char *s) {
	cout<<"Syntax error\n";
	exit(-1);
}


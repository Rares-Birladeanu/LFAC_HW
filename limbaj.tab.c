/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRINGVAL = 258,
     CHARVAL = 259,
     LBRACKET = 260,
     RBRACKET = 261,
     TRUE = 262,
     FALSE = 263,
     EVAL = 264,
     WHILE = 265,
     FOR = 266,
     IF = 267,
     ELSE = 268,
     BOOLEQ = 269,
     BOOLGEQ = 270,
     BOOLLEQ = 271,
     BOOLNEQ = 272,
     LOGICALAND = 273,
     LOGICALOR = 274,
     DECLF = 275,
     FCALL = 276,
     RETURN = 277,
     BOOLGE = 278,
     BOOLLE = 279,
     EQ = 280,
     STRUCTCALL = 281,
     OBJTYPE = 282,
     INTTYPE = 283,
     BOOLTYPE = 284,
     STRINGTYPE = 285,
     ARRAYTYPE = 286,
     CHARTYPE = 287,
     NR = 288,
     ID = 289,
     DECL = 290,
     ODECL = 291,
     MINUS = 292,
     PLUS = 293,
     DIV = 294,
     MUL = 295
   };
#endif
/* Tokens.  */
#define STRINGVAL 258
#define CHARVAL 259
#define LBRACKET 260
#define RBRACKET 261
#define TRUE 262
#define FALSE 263
#define EVAL 264
#define WHILE 265
#define FOR 266
#define IF 267
#define ELSE 268
#define BOOLEQ 269
#define BOOLGEQ 270
#define BOOLLEQ 271
#define BOOLNEQ 272
#define LOGICALAND 273
#define LOGICALOR 274
#define DECLF 275
#define FCALL 276
#define RETURN 277
#define BOOLGE 278
#define BOOLLE 279
#define EQ 280
#define STRUCTCALL 281
#define OBJTYPE 282
#define INTTYPE 283
#define BOOLTYPE 284
#define STRINGTYPE 285
#define ARRAYTYPE 286
#define CHARTYPE 287
#define NR 288
#define ID 289
#define DECL 290
#define ODECL 291
#define MINUS 292
#define PLUS 293
#define DIV 294
#define MUL 295




/* Copy the first part of user declarations.  */
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "limbaj.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern char* yytext;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "limbaj.y"
{
  int intVal; //value
  char* dataType; // datatype
  char* strVal; // ID
  char *key;
}
/* Line 193 of yacc.c.  */
#line 196 "limbaj.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 209 "limbaj.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  286

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    46,     2,    41,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    12,    15,    17,
      25,    32,    34,    37,    39,    46,    51,    58,    63,    70,
      75,    82,    89,    94,   101,   107,   113,   120,   125,   132,
     137,   144,   149,   156,   163,   168,   175,   182,   185,   189,
     193,   195,   197,   199,   201,   203,   205,   207,   210,   212,
     218,   224,   230,   236,   243,   249,   254,   258,   260,   263,
     266,   269,   272,   274,   276,   280,   282,   285,   288,   291,
     294,   296,   300,   304,   308,   312,   314,   321,   326,   331,
     335,   338,   340,   343,   345,   347,   349,   351,   353,   355,
     362,   372,   379,   389,   395,   401,   407,   413,   419,   425,
     431,   437,   439,   441,   443,   445,   449,   453,   457,   461,
     465,   469,   473,   477,   481,   485,   489,   493,   497,   499,
     501,   503,   505,   507,   511,   515,   519,   523,   525,   527,
     529,   531,   533
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    51,    60,    -1,    -1,    52,
      -1,    -1,    52,    53,    -1,    53,    -1,    26,    50,    27,
      34,     5,    55,    54,    -1,    26,    50,    27,    34,     5,
      54,    -1,     6,    -1,    55,    56,    -1,    56,    -1,    35,
      28,    34,    25,    33,    41,    -1,    35,    28,    34,    41,
      -1,    35,    32,    34,    25,     4,    41,    -1,    35,    32,
      34,    41,    -1,    35,    30,    34,    25,     3,    41,    -1,
      35,    30,    34,    41,    -1,    35,    29,    34,    25,     7,
      41,    -1,    35,    29,    34,    25,     8,    41,    -1,    35,
      29,    34,    41,    -1,    35,    31,    34,    25,    57,    41,
      -1,    21,     9,    42,    67,    43,    -1,    21,    34,    42,
      63,    43,    -1,    36,    28,    34,    25,    33,    41,    -1,
      36,    28,    34,    41,    -1,    36,    32,    34,    25,     4,
      41,    -1,    36,    32,    34,    41,    -1,    36,    30,    34,
      25,     3,    41,    -1,    36,    30,    34,    41,    -1,    36,
      29,    34,    25,     7,    41,    -1,    36,    29,    34,    25,
       8,    41,    -1,    36,    29,    34,    41,    -1,    36,    31,
      34,    25,    57,    41,    -1,    36,    28,     9,    42,    67,
      43,    -1,    44,    45,    -1,    44,    58,    45,    -1,    58,
      46,    59,    -1,    59,    -1,    33,    -1,     4,    -1,     3,
      -1,    34,    -1,    53,    -1,    57,    -1,    60,    61,    -1,
      61,    -1,    20,    28,    34,    50,    62,    -1,    20,    32,
      34,    50,    62,    -1,    20,    29,    34,    50,    62,    -1,
      20,    30,    34,    50,    62,    -1,    20,    28,     9,    42,
      67,    43,    -1,    21,    34,    42,    63,    43,    -1,    42,
      65,    43,    69,    -1,    63,    46,    64,    -1,    64,    -1,
      28,    34,    -1,    32,    34,    -1,    30,    34,    -1,    29,
      34,    -1,    61,    -1,    33,    -1,    65,    46,    66,    -1,
      66,    -1,    28,    34,    -1,    32,    34,    -1,    30,    34,
      -1,    29,    34,    -1,    68,    -1,    68,    38,    68,    -1,
      68,    37,    68,    -1,    68,    40,    68,    -1,    68,    39,
      68,    -1,    33,    -1,    35,    28,    34,    25,    33,    41,
      -1,    35,    28,    34,    41,    -1,     5,    71,    22,    70,
      -1,     5,    71,    70,    -1,     5,     6,    -1,     6,    -1,
      71,    72,    -1,    72,    -1,    56,    -1,    76,    -1,    73,
      -1,    74,    -1,    75,    -1,    10,    50,    42,    82,    43,
      69,    -1,    11,    50,    42,    76,    82,    41,    76,    43,
      69,    -1,    12,    50,    42,    82,    43,    69,    -1,    12,
      50,    42,    82,    43,    69,    13,    50,    69,    -1,    35,
      34,    25,    33,    41,    -1,    35,    34,    25,     4,    41,
      -1,    35,    34,    25,     3,    41,    -1,    35,    34,    25,
       7,    41,    -1,    35,    34,    25,     8,    41,    -1,    35,
      34,    25,    57,    41,    -1,    35,    34,    25,    77,    41,
      -1,    35,    34,    25,    34,    41,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    34,    38,    34,    -1,    34,
      38,    33,    -1,    33,    38,    34,    -1,    34,    37,    34,
      -1,    34,    37,    33,    -1,    33,    37,    34,    -1,    34,
      40,    34,    -1,    34,    40,    33,    -1,    33,    40,    34,
      -1,    34,    39,    34,    -1,    34,    39,    33,    -1,    33,
      39,    34,    -1,    82,    83,    84,    -1,    84,    -1,    18,
      -1,    19,    -1,     7,    -1,     8,    -1,    33,    85,    33,
      -1,    34,    85,    33,    -1,    33,    85,    34,    -1,    34,
      85,    34,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,    24,    -1,    23,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    35,    37,    40,    41,    44,    45,    48,
      49,    52,    55,    56,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    89,    90,    93,
      94,    97,    98,    99,   100,   101,   102,   105,   106,   109,
     110,   111,   112,   113,   114,   122,   125,   126,   129,   130,
     131,   132,   133,   134,   137,   138,   141,   142,   143,   144,
     147,   150,   151,   152,   153,   154,   155,   167,   180,   181,
     182,   185,   188,   189,   192,   193,   194,   195,   196,   199,
     202,   205,   206,   210,   211,   212,   213,   214,   215,   216,
     217,   220,   221,   222,   223,   226,   227,   228,   231,   232,
     233,   236,   237,   238,   241,   242,   243,   246,   247,   250,
     251,   254,   255,   256,   257,   258,   259,   262,   263,   264,
     265,   266,   267
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRINGVAL", "CHARVAL", "LBRACKET",
  "RBRACKET", "TRUE", "FALSE", "EVAL", "WHILE", "FOR", "IF", "ELSE",
  "BOOLEQ", "BOOLGEQ", "BOOLLEQ", "BOOLNEQ", "LOGICALAND", "LOGICALOR",
  "DECLF", "FCALL", "RETURN", "BOOLGE", "BOOLLE", "EQ", "STRUCTCALL",
  "OBJTYPE", "INTTYPE", "BOOLTYPE", "STRINGTYPE", "ARRAYTYPE", "CHARTYPE",
  "NR", "ID", "DECL", "ODECL", "MINUS", "PLUS", "DIV", "MUL", "'.'", "'('",
  "')'", "'['", "']'", "','", "$accept", "s", "progr", "depthAdd",
  "declarations", "objects", "object", "objEnd", "atributelist",
  "atribute", "arraylist", "list", "listval", "functions", "function",
  "functionBody", "callInstructions", "callInstruction",
  "declInstructions", "declInstruction", "exp", "e", "body", "bodyEnd",
  "blockInstructions", "blockInstruction", "while", "for", "if",
  "assignment", "operatie", "plus", "minus", "mul", "div", "conditii",
  "logicalOp", "conditie", "boolOp", 0
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
     295,    46,    40,    41,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    51,    52,    52,    53,
      53,    54,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    72,    72,    72,    72,    72,    73,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     0,     2,     1,     7,
       6,     1,     2,     1,     6,     4,     6,     4,     6,     4,
       6,     6,     4,     6,     5,     5,     6,     4,     6,     4,
       6,     4,     6,     6,     4,     6,     6,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       5,     5,     5,     6,     5,     4,     3,     1,     2,     2,
       2,     2,     1,     1,     3,     1,     2,     2,     2,     2,
       1,     3,     3,     3,     3,     1,     6,     4,     4,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     6,
       9,     6,     9,     5,     5,     5,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     4,     0,     2,     0,     5,     8,     0,     1,     0,
       0,     3,    48,     7,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     4,     4,     4,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    62,
       0,    57,    11,     0,     0,     0,    10,     0,    13,    75,
       0,     0,    70,     0,    49,    51,    52,    50,    58,    61,
      60,    59,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    12,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    71,    74,    73,    66,
      69,    68,    67,     0,     0,     0,     0,     0,    15,     0,
      22,     0,    19,     0,     0,    17,     0,     0,    27,     0,
      34,     0,    31,     0,     0,    29,     0,    77,     0,    55,
      64,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     4,
       4,     4,     0,    84,     0,    83,    86,    87,    88,    85,
      14,    20,    21,    18,    43,    42,    41,    44,    37,    45,
      46,     0,    40,    23,    16,    36,    26,    32,    33,    30,
      35,    28,    76,     0,     0,     0,     0,    81,     0,    79,
      82,    38,     0,     0,     0,     0,     0,    78,    39,   121,
     122,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     127,   128,   129,   130,   132,   131,     0,     0,   119,   120,
       0,     0,     0,     0,    95,    94,    96,    97,     0,     0,
       0,     0,    93,     0,     0,     0,     0,   100,    98,    99,
     123,   125,   124,   126,    89,   117,     0,    91,   110,   107,
     116,   113,   109,   108,   106,   105,   115,   114,   112,   111,
       0,     4,     0,     0,    90,    92
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     4,     5,   179,    46,    47,   163,
     180,   181,   182,    11,    39,    54,    40,    41,    88,    89,
      51,    52,   139,   199,   164,   165,   166,   167,   168,   169,
     225,   226,   227,   228,   229,   213,   241,   214,   236
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -235
static const yytype_int16 yypact[] =
{
       0,  -235,    31,  -235,    82,     0,  -235,    44,  -235,   133,
      79,    82,  -235,  -235,    85,    -2,   110,   130,   135,    36,
    -235,   180,   158,  -235,  -235,  -235,  -235,    88,     2,    77,
     160,   160,   160,   160,   167,   169,   170,   171,  -235,  -235,
      29,  -235,  -235,    54,    98,   118,  -235,     2,  -235,  -235,
     178,   164,   134,   138,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,    88,   166,   168,   175,   177,   179,   181,
     182,    57,   183,   184,   185,   186,  -235,  -235,   187,  -235,
      77,    77,    77,    77,   188,   189,   190,   191,    34,  -235,
    -235,    77,    88,    51,    56,    59,   201,    60,   172,    64,
      65,    70,   202,    73,    74,   140,   140,  -235,  -235,  -235,
    -235,  -235,  -235,   207,   138,   192,    61,   195,  -235,   174,
    -235,   226,  -235,   193,   227,  -235,    77,   197,  -235,   176,
    -235,   229,  -235,   193,   230,  -235,   200,  -235,    58,  -235,
    -235,  -235,  -235,   198,   199,   203,   204,     7,   205,   206,
     208,   209,   211,   212,   213,   214,   215,   216,  -235,  -235,
    -235,  -235,   111,  -235,    24,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   141,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,   194,   196,   217,   218,  -235,   235,  -235,
    -235,  -235,    21,    49,   225,    49,     9,  -235,  -235,  -235,
    -235,   108,   108,     1,  -235,   228,    49,    43,   220,   222,
     223,   224,   114,   119,   231,   232,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,   155,   157,  -235,  -235,
     207,    49,    55,   207,  -235,  -235,  -235,  -235,   233,   234,
     236,   237,  -235,   159,   161,   163,   165,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,   225,   253,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
     238,  -235,   207,   207,  -235,  -235
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,   -23,  -235,  -235,    22,   239,  -235,    11,
    -119,  -235,    40,  -235,    17,   102,   156,   219,  -235,   162,
     -76,    95,  -234,    71,  -235,   113,  -235,  -235,  -235,  -199,
    -235,  -235,  -235,  -235,  -235,  -187,  -235,     8,    62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      30,    31,    32,    33,   148,   216,   264,    22,    42,   267,
     174,   175,   218,   219,   155,   115,   220,   221,   217,   238,
     239,    12,     6,    43,   174,   175,     1,    13,    20,   242,
     197,     8,    23,     1,   159,   160,   161,    44,    45,    48,
     176,   177,   222,   223,   240,    43,   198,     1,   284,   285,
     150,   147,   178,   147,   176,   177,   209,   210,    77,   162,
      45,   238,   239,    64,   158,   147,    98,   280,   159,   160,
     161,    14,    62,   238,   239,    63,   117,   113,    27,    43,
     114,   119,   211,   212,   121,   124,   243,   224,    65,   127,
     129,    99,   118,   162,    45,   131,   266,   120,   134,   136,
     122,   125,     9,    10,   142,   128,   130,    63,     9,    10,
      49,   132,    50,    19,   135,   137,    34,    35,    36,    21,
      37,    38,   230,   231,   232,   233,    66,    67,    68,    69,
      70,   234,   235,    55,    56,    57,   193,   194,   195,    66,
      67,    68,    69,    70,    24,   196,    71,    72,    73,    74,
      75,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,    15,    16,    17,    25,    18,    84,    85,    86,    26,
      87,    80,    81,    82,    83,   105,   106,   107,   108,    82,
      83,   144,   145,   152,   153,    28,   201,   202,   260,   261,
     262,   263,   272,   273,   274,   275,   276,   277,   278,   279,
      29,    58,    53,    59,    60,    61,    78,    79,    91,    93,
      92,    94,   138,    95,   126,    96,    97,   100,   101,   102,
     103,   104,   109,   110,   111,   112,   123,   133,   143,   146,
     151,   149,   154,   157,   156,   141,   203,   147,   204,   170,
     171,   197,   208,   206,   172,   173,   183,   184,   116,   265,
     186,   185,   187,   188,   189,   190,   191,   192,   283,   205,
     215,   244,   196,   245,   246,   247,   281,   268,   269,   207,
     270,   271,   258,   259,   237,     0,   140,   200,     0,     0,
       0,   282,    90,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      23,    24,    25,    26,   123,   204,   240,     9,     6,   243,
       3,     4,     3,     4,   133,    91,     7,     8,   205,    18,
      19,     4,     0,    21,     3,     4,    26,     5,    11,   216,
       6,     0,    34,    26,    10,    11,    12,    35,    36,    28,
      33,    34,    33,    34,    43,    21,    22,    26,   282,   283,
     126,    44,    45,    44,    33,    34,     7,     8,    47,    35,
      36,    18,    19,     9,     6,    44,     9,   266,    10,    11,
      12,    27,    43,    18,    19,    46,    25,    43,    42,    21,
      46,    25,    33,    34,    25,    25,    43,   206,    34,    25,
      25,    34,    41,    35,    36,    25,    41,    41,    25,    25,
      41,    41,    20,    21,    43,    41,    41,    46,    20,    21,
      33,    41,    35,    34,    41,    41,    28,    29,    30,    34,
      32,    33,    14,    15,    16,    17,    28,    29,    30,    31,
      32,    23,    24,    31,    32,    33,   159,   160,   161,    28,
      29,    30,    31,    32,    34,    34,    28,    29,    30,    31,
      32,    37,    38,    39,    40,    41,    37,    38,    39,    40,
      41,    28,    29,    30,    34,    32,    28,    29,    30,    34,
      32,    37,    38,    39,    40,    80,    81,    82,    83,    39,
      40,     7,     8,     7,     8,     5,    45,    46,    33,    34,
      33,    34,    33,    34,    33,    34,    33,    34,    33,    34,
      42,    34,    42,    34,    34,    34,    28,    43,    42,    34,
      42,    34,     5,    34,    42,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    25,    25,    33,     3,
      33,     4,     3,    33,     4,    43,    42,    44,    42,    41,
      41,     6,   202,    25,    41,    41,    41,    41,    92,   241,
      41,    43,    41,    41,    41,    41,    41,    41,   281,    42,
      35,    41,    34,    41,    41,    41,    13,    34,    34,   198,
      34,    34,    41,    41,   212,    -1,   114,   164,    -1,    -1,
      -1,    43,    63,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,    48,    49,    51,    52,    53,    50,     0,    20,
      21,    60,    61,    53,    27,    28,    29,    30,    32,    34,
      61,    34,     9,    34,    34,    34,    34,    42,     5,    42,
      50,    50,    50,    50,    28,    29,    30,    32,    33,    61,
      63,    64,     6,    21,    35,    36,    54,    55,    56,    33,
      35,    67,    68,    42,    62,    62,    62,    62,    34,    34,
      34,    34,    43,    46,     9,    34,    28,    29,    30,    31,
      32,    28,    29,    30,    31,    32,    54,    56,    28,    43,
      37,    38,    39,    40,    28,    29,    30,    32,    65,    66,
      64,    42,    42,    34,    34,    34,    34,    34,     9,    34,
      34,    34,    34,    34,    34,    68,    68,    68,    68,    34,
      34,    34,    34,    43,    46,    67,    63,    25,    41,    25,
      41,    25,    41,    25,    25,    41,    42,    25,    41,    25,
      41,    25,    41,    25,    25,    41,    25,    41,     5,    69,
      66,    43,    43,    33,     7,     8,     3,    44,    57,     4,
      67,    33,     7,     8,     3,    57,     4,    33,     6,    10,
      11,    12,    35,    56,    71,    72,    73,    74,    75,    76,
      41,    41,    41,    41,     3,     4,    33,    34,    45,    53,
      57,    58,    59,    41,    41,    43,    41,    41,    41,    41,
      41,    41,    41,    50,    50,    50,    34,     6,    22,    70,
      72,    45,    46,    42,    42,    42,    25,    70,    59,     7,
       8,    33,    34,    82,    84,    35,    76,    82,     3,     4,
       7,     8,    33,    34,    57,    77,    78,    79,    80,    81,
      14,    15,    16,    17,    23,    24,    85,    85,    18,    19,
      43,    83,    82,    43,    41,    41,    41,    41,    37,    38,
      39,    40,    41,    37,    38,    39,    40,    41,    41,    41,
      33,    34,    33,    34,    69,    84,    41,    69,    34,    34,
      34,    34,    33,    34,    33,    34,    33,    34,    33,    34,
      76,    13,    43,    50,    69,    69
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 33 "limbaj.y"
    {printf ("\n Language is syntactically correct.\n"); printTable(); write();;}
    break;

  case 4:
#line 37 "limbaj.y"
    { increaseDepth(); ;}
    break;

  case 11:
#line 52 "limbaj.y"
    { decreaseDepth(); ;}
    break;

  case 14:
#line 59 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key),(yyvsp[(2) - (6)].dataType),(yyvsp[(3) - (6)].strVal),(yyvsp[(5) - (6)].intVal));;}
    break;

  case 15:
#line 60 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key), (yyvsp[(2) - (4)].dataType), (yyvsp[(3) - (4)].strVal), 2147483647);;}
    break;

  case 16:
#line 61 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), -1);;}
    break;

  case 17:
#line 62 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key), (yyvsp[(2) - (4)].dataType), (yyvsp[(3) - (4)].strVal), -1);;}
    break;

  case 18:
#line 63 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), -1);;}
    break;

  case 19:
#line 64 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key), (yyvsp[(2) - (4)].dataType), (yyvsp[(3) - (4)].strVal), -1);;}
    break;

  case 20:
#line 65 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), 1);;}
    break;

  case 21:
#line 66 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), 0);;}
    break;

  case 22:
#line 67 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key),(yyvsp[(2) - (4)].dataType),(yyvsp[(3) - (4)].strVal),-1);;}
    break;

  case 23:
#line 68 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), -1);;}
    break;

  case 25:
#line 71 "limbaj.y"
    {    
                    insertName((yyvsp[(2) - (5)].strVal));
                         if (checkIdentity((yyvsp[(2) - (5)].strVal))==0)
                              printf("The types of the called function do not match with the declared types for %s \n", (yyvsp[(2) - (5)].strVal));
               ;}
    break;

  case 26:
#line 76 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), (yyvsp[(5) - (6)].intVal));;}
    break;

  case 27:
#line 77 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key), (yyvsp[(2) - (4)].dataType), (yyvsp[(3) - (4)].strVal), 2147483647);;}
    break;

  case 28:
#line 78 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), -1);;}
    break;

  case 29:
#line 79 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key), (yyvsp[(2) - (4)].dataType), (yyvsp[(3) - (4)].strVal), -1);;}
    break;

  case 30:
#line 80 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), -1);;}
    break;

  case 31:
#line 81 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key), (yyvsp[(2) - (4)].dataType), (yyvsp[(3) - (4)].strVal), -1);;}
    break;

  case 32:
#line 82 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), 1);;}
    break;

  case 33:
#line 83 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), 0);;}
    break;

  case 34:
#line 84 "limbaj.y"
    {insert((yyvsp[(1) - (4)].key),(yyvsp[(2) - (4)].dataType),(yyvsp[(3) - (4)].strVal),-1);;}
    break;

  case 35:
#line 85 "limbaj.y"
    {insert((yyvsp[(1) - (6)].key), (yyvsp[(2) - (6)].dataType), (yyvsp[(3) - (6)].strVal), -1);;}
    break;

  case 49:
#line 109 "limbaj.y"
    { insertIntoFunctionsignature((yyvsp[(2) - (5)].dataType)); insertIntoFunctionsignature((yyvsp[(3) - (5)].strVal)); insertIntoNameArray((yyvsp[(3) - (5)].strVal)); insertFunction(); ;}
    break;

  case 50:
#line 110 "limbaj.y"
    { insertIntoFunctionsignature((yyvsp[(2) - (5)].dataType)); insertIntoFunctionsignature((yyvsp[(3) - (5)].strVal)); insertIntoNameArray((yyvsp[(3) - (5)].strVal)); insertFunction(); ;}
    break;

  case 51:
#line 111 "limbaj.y"
    { insertIntoFunctionsignature((yyvsp[(2) - (5)].dataType)); insertIntoFunctionsignature((yyvsp[(3) - (5)].strVal)); insertIntoNameArray((yyvsp[(3) - (5)].strVal)); insertFunction(); ;}
    break;

  case 52:
#line 112 "limbaj.y"
    { insertIntoFunctionsignature((yyvsp[(2) - (5)].dataType)); insertIntoFunctionsignature((yyvsp[(3) - (5)].strVal)); insertIntoNameArray((yyvsp[(3) - (5)].strVal)); insertFunction(); ;}
    break;

  case 54:
#line 115 "limbaj.y"
    {    
                    insertName((yyvsp[(2) - (5)].strVal));
                    if (!checkIdentity((yyvsp[(2) - (5)].strVal)))
                         printf("The types of the called function do not match with the declared types for %s \n", (yyvsp[(2) - (5)].strVal));
               ;}
    break;

  case 58:
#line 129 "limbaj.y"
    {insertIntoUserArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 59:
#line 130 "limbaj.y"
    {insertIntoUserArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 60:
#line 131 "limbaj.y"
    {insertIntoUserArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 61:
#line 132 "limbaj.y"
    {insertIntoUserArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 63:
#line 134 "limbaj.y"
    {insertIntoUserArray("int");;}
    break;

  case 66:
#line 141 "limbaj.y"
    {  insertTEMP((yyvsp[(1) - (2)].dataType)); insertIntoParamArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 67:
#line 142 "limbaj.y"
    {  insertTEMP((yyvsp[(1) - (2)].dataType)); insertIntoParamArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 68:
#line 143 "limbaj.y"
    {  insertTEMP((yyvsp[(1) - (2)].dataType)); insertIntoParamArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 69:
#line 144 "limbaj.y"
    {  insertTEMP((yyvsp[(1) - (2)].dataType)); insertIntoParamArray((yyvsp[(1) - (2)].dataType));;}
    break;

  case 70:
#line 147 "limbaj.y"
    {(yyval.intVal)=(yyvsp[(1) - (1)].intVal); printf("Valoarea expresiei este %d\n",(yyval.intVal));;}
    break;

  case 71:
#line 150 "limbaj.y"
    {(yyval.intVal)=(yyvsp[(1) - (3)].intVal)+(yyvsp[(3) - (3)].intVal); ;}
    break;

  case 72:
#line 151 "limbaj.y"
    {(yyval.intVal)=(yyvsp[(1) - (3)].intVal)-(yyvsp[(3) - (3)].intVal); ;}
    break;

  case 73:
#line 152 "limbaj.y"
    {(yyval.intVal)=(yyvsp[(1) - (3)].intVal)*(yyvsp[(3) - (3)].intVal); ;}
    break;

  case 74:
#line 153 "limbaj.y"
    {(yyval.intVal)=(yyvsp[(1) - (3)].intVal)/(yyvsp[(3) - (3)].intVal); ;}
    break;

  case 75:
#line 154 "limbaj.y"
    {(yyval.intVal)=(yyvsp[(1) - (1)].intVal); ;}
    break;

  case 76:
#line 156 "limbaj.y"
    { 
               int i; 
               if((i=existsVariable((yyvsp[(3) - (6)].strVal))) != -1){ 
                    updateVariableValue((yyvsp[(3) - (6)].strVal), (yyvsp[(5) - (6)].intVal));
                    (yyval.intVal) =  symTable[i].Value ;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(0);
               }
          ;}
    break;

  case 77:
#line 168 "limbaj.y"
    { 
               int i;
               if((i=existsVariable((yyvsp[(3) - (4)].strVal))) != -1) {   
                    (yyval.intVal)= symTable[i].Value;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(1);
               }
          ;}
    break;

  case 81:
#line 185 "limbaj.y"
    { decreaseDepth(); ;}
    break;

  case 93:
#line 210 "limbaj.y"
    { updateVariableValue((yyvsp[(2) - (5)].strVal), (yyvsp[(4) - (5)].intVal)); ;}
    break;

  case 100:
#line 217 "limbaj.y"
    { updateVariableId((yyvsp[(2) - (5)].strVal), (yyvsp[(4) - (5)].strVal)); ;}
    break;

  case 105:
#line 226 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal)); checkDeclaration((yyvsp[(3) - (3)].strVal)); ;}
    break;

  case 106:
#line 227 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal));;}
    break;

  case 107:
#line 228 "limbaj.y"
    { checkDeclaration((yyvsp[(3) - (3)].strVal));;}
    break;

  case 108:
#line 231 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal)); checkDeclaration((yyvsp[(3) - (3)].strVal)); ;}
    break;

  case 109:
#line 232 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal));;}
    break;

  case 110:
#line 233 "limbaj.y"
    { checkDeclaration((yyvsp[(3) - (3)].strVal));;}
    break;

  case 111:
#line 236 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal)); checkDeclaration((yyvsp[(3) - (3)].strVal)); ;}
    break;

  case 112:
#line 237 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal));;}
    break;

  case 113:
#line 238 "limbaj.y"
    { checkDeclaration((yyvsp[(3) - (3)].strVal));;}
    break;

  case 114:
#line 241 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal)); checkDeclaration((yyvsp[(3) - (3)].strVal)); ;}
    break;

  case 115:
#line 242 "limbaj.y"
    { checkDeclaration((yyvsp[(1) - (3)].strVal));;}
    break;

  case 116:
#line 243 "limbaj.y"
    { checkDeclaration((yyvsp[(3) - (3)].strVal));;}
    break;


/* Line 1267 of yacc.c.  */
#line 1991 "limbaj.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 271 "limbaj.y"


int yyerror(char * s){
printf("Error: %s on line:%d and yytext is %s\n",s,yylineno,yytext);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
}


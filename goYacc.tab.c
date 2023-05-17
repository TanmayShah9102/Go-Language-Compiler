
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\goYacc.y"

	#include<stdio.h>
	#include<stdlib.h>
	int yylex();
	int yyerror();
	extern FILE *yyin;
	extern FILE *outputFile;


/* Line 189 of yacc.c  */
#line 83 "goYacc.tab.c"

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
     BREAK = 258,
     DEFAULT = 259,
     FUNC = 260,
     INTERFACE = 261,
     SELECT = 262,
     CASE = 263,
     DEFER = 264,
     GO = 265,
     MAP = 266,
     STRUCT = 267,
     CHAN = 268,
     ELSE = 269,
     GOTO = 270,
     PACKAGE = 271,
     SWITCH = 272,
     CONST = 273,
     FALLTHROUGH = 274,
     IF = 275,
     RANGE = 276,
     TYPE = 277,
     CONTINUE = 278,
     FOR = 279,
     IMPORT = 280,
     RETURN = 281,
     VAR = 282,
     SC = 283,
     COL = 284,
     COM = 285,
     DOTS = 286,
     DOT = 287,
     LRB = 288,
     RRB = 289,
     LSB = 290,
     RSB = 291,
     LCB = 292,
     RCB = 293,
     EQ = 294,
     ASSIGN = 295,
     STAR = 296,
     PIPE = 297,
     AND = 298,
     INC = 299,
     DEC = 300,
     LOG_AND = 301,
     LOG_OR = 302,
     REL_OP = 303,
     PAR_ADD_OP = 304,
     PAR_MUL_OP = 305,
     PAR_UNARY_OP = 306,
     INT_LIT = 307,
     FLOAT_LIT = 308,
     IMAGINARY_LIT = 309,
     RUNE_LIT = 310,
     STRING_LIT = 311,
     IDENTIFIER = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 195 "goYacc.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNRULES -- Number of states.  */
#define YYNSTATES  335

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    13,    15,    17,    19,    23,    25,
      26,    30,    34,    38,    39,    41,    43,    47,    49,    51,
      53,    55,    60,    62,    64,    67,    69,    72,    75,    77,
      79,    81,    85,    88,    92,    94,    98,   101,   104,   106,
     109,   116,   120,   121,   126,   129,   133,   136,   143,   147,
     148,   153,   157,   159,   163,   165,   169,   171,   173,   175,
     178,   181,   183,   184,   188,   193,   195,   197,   198,   200,
     204,   206,   209,   211,   213,   215,   217,   219,   221,   223,
     225,   227,   229,   231,   233,   235,   237,   239,   241,   244,
     247,   250,   253,   256,   260,   265,   271,   276,   281,   285,
     292,   298,   304,   309,   312,   316,   319,   320,   322,   324,
     328,   332,   334,   336,   338,   340,   342,   344,   346,   348,
     350,   352,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   382,   384,   386,   390,
     392,   395,   398,   400,   403,   405,   408,   410,   413,   415,
     423,   431,   437,   443,   449,   453,   455,   457,   465,   472,
     478,   483,   488,   489,   492,   494,   502,   508,   516,   522,
     527,   528,   531,   533,   537,   539,   543,   547,   551,   554,
     556,   557,   563,   565,   566,   568,   569,   574,   579,   582,
     585,   586,   588,   591,   594,   598,   601,   604
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      59,     0,    -1,    60,    28,    62,    28,    88,    28,    -1,
      16,    61,    -1,     1,    -1,    57,    -1,    56,    -1,    62,
      25,    61,    -1,     1,    -1,    -1,    37,    64,    38,    -1,
      37,     1,    38,    -1,    64,   109,    28,    -1,    -1,    66,
      -1,    67,    -1,    33,    65,    34,    -1,    57,    -1,    68,
      -1,    71,    -1,    73,    -1,    35,    69,    36,    70,    -1,
      93,    -1,    65,    -1,    41,    72,    -1,    65,    -1,     5,
      74,    -1,    76,    75,    -1,    76,    -1,    76,    -1,    65,
      -1,    33,    77,    34,    -1,    33,    34,    -1,    77,    30,
      78,    -1,    78,    -1,    85,    31,    65,    -1,    85,    65,
      -1,    31,    65,    -1,    65,    -1,    27,    81,    -1,    27,
      33,    81,    28,    80,    34,    -1,    80,    81,    28,    -1,
      -1,    85,    65,    39,    86,    -1,    85,    65,    -1,    85,
      39,    86,    -1,    18,    84,    -1,    18,    33,    84,    28,
      83,    34,    -1,    83,    84,    28,    -1,    -1,    85,    65,
      39,    86,    -1,    85,    39,    86,    -1,    85,    -1,    85,
      30,    57,    -1,    57,    -1,    86,    30,    93,    -1,    93,
      -1,    82,    -1,    79,    -1,    88,    87,    -1,    88,    90,
      -1,     1,    -1,    -1,    85,    40,    86,    -1,     5,    91,
      74,    92,    -1,    57,    -1,    63,    -1,    -1,    94,    -1,
      93,    95,    93,    -1,    99,    -1,    98,    94,    -1,    47,
      -1,    46,    -1,    48,    -1,    96,    -1,    97,    -1,    49,
      -1,    42,    -1,    50,    -1,    41,    -1,    43,    -1,    51,
      -1,    49,    -1,    41,    -1,    43,    -1,   105,    -1,   100,
      -1,    99,   100,    -1,    99,   101,    -1,    99,   102,    -1,
      99,   103,    -1,    32,    57,    -1,    35,    93,    36,    -1,
      32,    33,    65,    34,    -1,    33,    86,    31,    30,    34,
      -1,    33,    86,    31,    34,    -1,    33,    86,    30,    34,
      -1,    33,    86,    34,    -1,    33,    65,   104,    31,    30,
      34,    -1,    33,    65,   104,    31,    34,    -1,    33,    65,
     104,    30,    34,    -1,    33,    65,   104,    34,    -1,    33,
      34,    -1,    33,     1,    34,    -1,    30,    93,    -1,    -1,
     106,    -1,   108,    -1,    33,    93,    34,    -1,    33,     1,
      34,    -1,   107,    -1,    52,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    57,    -1,    87,    -1,   111,    -1,
     110,    -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,    63,    -1,   119,    -1,   120,    -1,
     129,    -1,   135,    -1,     1,    -1,   136,    -1,   137,    -1,
     138,    -1,   139,    -1,    89,    -1,   112,    29,   109,    -1,
      57,    -1,    10,    93,    -1,    26,    86,    -1,    26,    -1,
       3,   112,    -1,     3,    -1,    23,   112,    -1,    23,    -1,
      15,   112,    -1,    19,    -1,    20,   110,    28,    93,    63,
      14,   119,    -1,    20,   110,    28,    93,    63,    14,    63,
      -1,    20,   110,    28,    93,    63,    -1,    20,    93,    63,
      14,   119,    -1,    20,    93,    63,    14,    63,    -1,    20,
      93,    63,    -1,   121,    -1,   124,    -1,    17,   110,    28,
      93,    37,   122,    38,    -1,    17,   110,    28,    37,   122,
      38,    -1,    17,    93,    37,   122,    38,    -1,    17,    37,
     122,    38,    -1,   122,   123,    29,    64,    -1,    -1,     8,
      86,    -1,     4,    -1,    17,   110,    28,   125,    37,   126,
      38,    -1,    17,   125,    37,   126,    38,    -1,    57,    40,
      99,    32,    33,    22,    34,    -1,    99,    32,    33,    22,
      34,    -1,   126,   127,    29,    64,    -1,    -1,     8,   128,
      -1,     4,    -1,   128,    30,    65,    -1,    65,    -1,    24,
     130,    63,    -1,    24,   131,    63,    -1,    24,   134,    63,
      -1,    24,    63,    -1,    93,    -1,    -1,   132,    28,   130,
      28,   133,    -1,   110,    -1,    -1,   110,    -1,    -1,    86,
      39,    21,    93,    -1,    85,    40,    21,    93,    -1,    21,
      93,    -1,     9,    93,    -1,    -1,    93,    -1,    93,    44,
      -1,    93,    45,    -1,    86,   140,    86,    -1,    96,    39,
      -1,    97,    39,    -1,    39,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    34,    35,    38,    39,    42,    43,    44,
      50,    51,    54,    55,    61,    62,    63,    66,    69,    70,
      71,    74,    77,    80,    83,    86,    89,    92,    93,    96,
      97,   100,   101,   104,   105,   108,   109,   110,   111,   117,
     118,   121,   122,   125,   126,   127,   133,   134,   137,   138,
     141,   142,   143,   146,   147,   150,   151,   157,   158,   161,
     162,   163,   164,   170,   176,   179,   182,   183,   189,   190,
     193,   194,   197,   198,   199,   200,   201,   204,   205,   208,
     209,   210,   213,   214,   215,   216,   219,   220,   221,   222,
     223,   224,   227,   230,   233,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   247,   248,   254,   255,   256,
     257,   260,   263,   264,   265,   266,   267,   270,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   293,   294,   295,   296,   297,   300,   303,
     306,   309,   310,   313,   314,   317,   318,   321,   324,   327,
     328,   329,   330,   331,   332,   335,   336,   339,   340,   341,
     342,   345,   346,   349,   350,   353,   354,   357,   358,   361,
     362,   365,   366,   368,   369,   372,   373,   374,   375,   378,
     379,   382,   384,   385,   388,   389,   392,   393,   394,   397,
     400,   403,   406,   407,   410,   413,   414,   415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "DEFAULT", "FUNC", "INTERFACE",
  "SELECT", "CASE", "DEFER", "GO", "MAP", "STRUCT", "CHAN", "ELSE", "GOTO",
  "PACKAGE", "SWITCH", "CONST", "FALLTHROUGH", "IF", "RANGE", "TYPE",
  "CONTINUE", "FOR", "IMPORT", "RETURN", "VAR", "SC", "COL", "COM", "DOTS",
  "DOT", "LRB", "RRB", "LSB", "RSB", "LCB", "RCB", "EQ", "ASSIGN", "STAR",
  "PIPE", "AND", "INC", "DEC", "LOG_AND", "LOG_OR", "REL_OP", "PAR_ADD_OP",
  "PAR_MUL_OP", "PAR_UNARY_OP", "INT_LIT", "FLOAT_LIT", "IMAGINARY_LIT",
  "RUNE_LIT", "STRING_LIT", "IDENTIFIER", "$accept", "SourceFile",
  "PackageClause", "PackageName", "ImportDecl", "Block", "StatementList",
  "Type", "TypeName", "TypeLit", "ArrayType", "ArrayLength", "ElementType",
  "PointerType", "BaseType", "FunctionType", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "VarDecl",
  "RepeatVarSpec", "VarSpec", "ConstDecl", "RepeatConstSpec", "ConstSpec",
  "IdentifierList", "ExpressionList", "Declaration", "TopLevelDecl",
  "ShortVarDecl", "FuncDecl", "FunctionName", "FunctionBody", "Expression",
  "UnaryExpr", "binary_op", "add_op", "mul_op", "unary_op", "PrimaryExpr",
  "Selector", "Index", "TypeAsertion", "Arguments", "OptionArguments",
  "Operand", "Literal", "BasicLit", "OperandName", "Statement",
  "SimpleStmt", "LabeledStmt", "Label", "GoStmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "GotoStmt", "FallthroughStmt", "IfStmt",
  "SwitchStmt", "ExprSwitchStmt", "ExprCaseClause", "ExprSwitchCase",
  "TypeSwitchStmt", "TypeSwitchGuard", "TypeCaseClause", "TypeSwitchCase",
  "TypeList", "ForStmt", "Condition", "ForClause", "InitStmt", "PostStmt",
  "RangeClause", "DeferStmt", "EmptyStmt", "ExpressionStmt", "IncDecStmt",
  "Assignment", "assign_op", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    62,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    66,    67,    67,
      67,    68,    69,    70,    71,    72,    73,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    79,
      79,    80,    80,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    88,    89,    90,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   101,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   105,   105,
     105,   106,   107,   107,   107,   107,   107,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   110,   110,   110,   110,   110,   111,   112,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   129,   130,
     130,   131,   132,   132,   133,   133,   134,   134,   134,   135,
     136,   137,   138,   138,   139,   140,   140,   140
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     1,     1,     1,     3,     1,     0,
       3,     3,     3,     0,     1,     1,     3,     1,     1,     1,
       1,     4,     1,     1,     2,     1,     2,     2,     1,     1,
       1,     3,     2,     3,     1,     3,     2,     2,     1,     2,
       6,     3,     0,     4,     2,     3,     2,     6,     3,     0,
       4,     3,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     1,     0,     3,     4,     1,     1,     0,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     4,     5,     4,     4,     3,     6,
       5,     5,     4,     2,     3,     2,     0,     1,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     7,
       7,     5,     5,     5,     3,     1,     1,     7,     6,     5,
       4,     4,     0,     2,     1,     7,     5,     7,     5,     4,
       0,     2,     1,     3,     1,     3,     3,     3,     2,     1,
       0,     5,     1,     0,     1,     0,     4,     4,     2,     2,
       0,     1,     2,     2,     3,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     6,     5,     3,     1,     0,
       8,     0,     0,     0,     7,    61,     0,     0,     0,     0,
       2,    58,    57,    59,    60,    65,     0,     0,    54,    46,
      52,     0,    39,     0,     0,    67,    28,     0,     0,     0,
       0,     0,     0,     0,    17,     0,    14,    15,    18,    19,
      20,     0,     0,    44,     0,    32,    54,    38,     0,    34,
       0,     0,    66,    64,     0,    30,    27,    29,    49,    26,
      53,     0,     0,     0,    84,    85,    83,    82,   112,   113,
     114,   115,   116,   117,     0,    22,    68,     0,    70,    87,
      86,   107,   111,   108,    51,    56,    25,    24,     0,    42,
      45,     0,    37,     0,    31,     0,    36,     0,     0,    38,
       0,    16,    92,     0,     0,     0,    80,    78,    81,    73,
      72,    74,    77,    79,     0,    75,    76,    71,     0,     0,
       0,    88,    89,    90,    91,     0,    50,     0,    43,    33,
      35,    11,   132,   144,     0,     0,     0,   190,   148,   190,
     146,   183,   142,    10,   117,   127,     0,     0,   118,   137,
      56,     0,   120,   119,     0,   121,   122,   123,   124,   125,
     126,   128,   129,   155,   156,   130,   131,   133,   134,   135,
     136,    47,     0,   110,   109,    23,    21,    69,     0,     0,
       0,   103,    84,   117,   106,     0,     0,    55,    40,     0,
     139,   143,   189,   140,   147,   162,   117,    56,    70,     0,
       0,   117,    56,     0,   145,     0,   178,     0,     0,    56,
     182,     0,     0,     0,     0,   141,     0,   197,     0,     0,
       0,   192,   193,    12,     0,    48,     0,   104,     0,     0,
       0,     0,    98,    93,    41,     0,     0,   162,     0,     0,
     170,   154,     0,   188,     0,   197,   175,   176,   180,   177,
      63,   195,   196,   194,   138,    94,   105,     0,     0,   102,
      97,     0,    96,   164,     0,   160,     0,     0,     0,     0,
     162,   117,     0,     0,     0,     0,     0,     0,     0,   179,
       0,   101,     0,   100,    95,   163,    13,     0,   159,     0,
       0,   162,   170,   172,     0,   166,     0,   153,   152,   151,
     187,   186,   185,    99,     0,     0,   168,   158,     0,     0,
     174,   171,    13,     0,   184,   181,     0,   157,   165,     0,
       0,   150,   149,   167,   173
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     7,    11,   155,   108,   236,    46,    47,
      48,    84,   186,    49,    97,    50,    35,    66,    36,    58,
      59,    21,   137,    32,    22,   110,    29,   156,   157,   158,
      16,   159,    24,    26,    63,    95,    86,   124,   125,   126,
      87,    88,    89,   132,   133,   134,   239,    90,    91,    92,
      93,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   245,   276,   174,   210,   284,   306,
     321,   175,   221,   222,   223,   325,   224,   176,   177,   178,
     179,   180,   230
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -278
static const yytype_int16 yypact[] =
{
     152,  -278,   137,    95,    -5,  -278,  -278,  -278,  -278,    40,
    -278,    26,   137,   156,  -278,  -278,   207,   -28,    -7,     3,
    -278,  -278,  -278,  -278,  -278,  -278,     5,    -8,  -278,  -278,
      22,    -8,  -278,    23,   132,    52,   113,    98,     5,    74,
     170,   667,   667,   170,  -278,   108,  -278,  -278,  -278,  -278,
    -278,   150,   667,   163,   170,  -278,   -12,  -278,    53,  -278,
     520,   397,  -278,  -278,   132,  -278,  -278,  -278,  -278,  -278,
    -278,   151,   153,   215,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,   172,   868,  -278,   667,   295,  -278,
    -278,  -278,  -278,  -278,   184,   868,  -278,  -278,   667,  -278,
     184,   667,  -278,   166,  -278,   170,  -278,   179,   454,   151,
     -14,  -278,  -278,   197,   815,   170,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,   667,  -278,  -278,  -278,    49,   187,
     667,  -278,  -278,  -278,  -278,   667,   184,    37,   184,  -278,
    -278,  -278,  -278,   175,   667,   667,   175,   589,  -278,   693,
     175,   537,   667,  -278,   129,  -278,    84,   360,  -278,  -278,
     729,   217,  -278,  -278,   220,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,   218,  -278,  -278,  -278,  -278,   868,   170,   216,
      87,  -278,   170,   121,   225,   245,   830,   868,  -278,   235,
    -278,  -278,   868,   868,  -278,  -278,   142,   752,   321,   237,
     236,   221,   775,   249,  -278,   667,  -278,   222,   417,   798,
    -278,    52,    52,   255,    52,   184,   667,  -278,   250,   265,
     667,  -278,  -278,  -278,   511,  -278,   254,  -278,   667,   251,
     615,   146,  -278,  -278,  -278,    29,   699,  -278,    72,   641,
    -278,   276,   667,   868,   563,   273,  -278,  -278,   667,  -278,
     184,  -278,  -278,   184,  -278,  -278,   868,   271,   157,  -278,
    -278,   274,  -278,  -278,   667,  -278,   284,   352,    38,   290,
    -278,   277,   844,   281,    62,    66,   858,   667,   667,   868,
     286,  -278,   285,  -278,  -278,   184,  -278,    76,  -278,   288,
      89,  -278,  -278,  -278,   170,  -278,   300,  -278,  -278,   319,
     868,   868,   693,  -278,   283,   347,  -278,  -278,    94,   141,
    -278,   312,  -278,    66,  -278,  -278,   311,  -278,  -278,   170,
     340,  -278,  -278,  -278,  -278
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -278,  -278,  -278,   334,  -278,   -26,  -277,   -30,  -278,  -278,
    -278,  -278,  -278,  -278,  -278,  -278,   313,  -278,   325,  -278,
     259,  -278,  -278,   -29,  -278,  -278,   -19,    13,   -17,   349,
    -278,  -278,  -278,  -278,  -278,   -34,   287,  -278,  -146,  -140,
    -278,  -142,   -87,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,   136,  -135,  -278,    83,  -278,  -278,  -278,  -278,  -278,
    -278,  -264,  -278,  -278,  -232,  -278,  -278,   122,    73,  -278,
    -278,  -278,   118,  -278,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,  -278
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -192
static const yytype_int16 yytable[] =
{
      45,   131,    51,    53,    57,   208,    65,    85,    37,    62,
      71,   228,   209,    96,   213,   278,   220,   229,   -17,   314,
     181,   308,   -17,     9,   102,    94,    27,    38,    38,    25,
     106,    30,    33,   273,   109,   100,    31,   274,    34,   114,
      30,    10,   273,    28,    33,   330,   274,    60,   300,    28,
      28,    12,    39,    39,    13,    40,    40,    41,    41,   332,
      28,    42,    52,    43,    43,    -9,   303,   275,    -9,   318,
     304,   198,   228,    57,   160,   140,   298,    60,   229,    44,
      44,   136,   188,   103,   138,   185,   149,   104,   113,    61,
     187,   182,    38,   273,    28,     8,   196,   274,   273,   194,
     305,   197,   274,    61,   277,   279,   112,   208,   199,   315,
     202,   203,   195,   207,    39,   212,    60,   219,    38,    72,
     190,   131,    41,    30,   226,   216,    68,   317,   192,   112,
      75,    70,   327,   112,   218,   225,    76,    38,    77,    78,
      79,    80,    81,    82,   193,   303,    64,    98,    41,   304,
      33,   -17,   -17,     1,    43,   -17,   114,    15,  -139,   -54,
      71,   -62,    96,    54,   217,    40,    55,    41,     2,   -54,
      44,    38,   -54,    43,   -62,    38,   271,   324,    99,   328,
     272,   253,   246,   -62,   -62,   111,   251,   292,   189,    56,
     131,   293,    38,     5,     6,   256,   257,    54,   259,    40,
     160,    41,   101,    40,   266,    41,   197,    43,   115,   260,
     112,    43,    17,   263,   135,   282,   113,   141,   286,    72,
     190,   191,    41,    56,   289,    18,   201,    44,   192,   204,
      75,   183,   200,   214,    19,    20,    76,   260,    77,    78,
      79,    80,    81,    82,   193,   233,   235,    72,    73,   234,
     237,   -54,    39,   310,   311,   238,    74,   295,    75,   307,
     309,   -54,   254,   244,    76,   249,    77,    78,    79,    80,
      81,    82,    83,   250,   320,   240,   241,   252,   160,   242,
     160,   267,   268,   258,   142,   269,   143,  -161,   265,   261,
     285,  -161,   144,   145,   288,    38,   160,   331,   146,   334,
     147,    18,   148,   149,   262,   291,   150,   151,   294,   152,
      19,  -190,   299,   296,   312,    72,    73,   246,   302,   313,
      61,  -161,   316,    40,    74,    41,    75,   128,   129,   322,
     130,    43,    76,   323,    77,    78,    79,    80,    81,    82,
     154,   142,   329,   143,  -169,   333,    14,    44,  -169,   144,
     145,    69,    38,   248,   129,   146,   130,   147,    18,   148,
     149,    67,   139,   150,   151,    23,   152,    19,  -190,   326,
     264,   283,    72,    73,   127,   319,   290,    61,  -169,     0,
      40,    74,    41,    75,   297,   129,     0,   130,    43,    76,
     135,    77,    78,    79,    80,    81,    82,   154,   107,   227,
     -13,   116,   117,   118,    44,     0,   -13,   -13,     0,   122,
     123,     0,   -13,     0,   -13,   -13,   -13,   -13,     0,     0,
     -13,   -13,     0,   -13,   -13,   -13,     0,     0,     0,   -13,
     -13,     0,     0,     0,   -13,   -13,     0,     0,   -13,     0,
     -13,     0,     0,     0,     0,     0,   -13,   135,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   142,   255,   143,   116,   117,
     118,     0,     0,   144,   145,     0,   122,   123,     0,   146,
       0,   147,    18,   148,   149,     0,     0,   150,   151,     0,
     152,    19,  -190,     0,     0,     0,    72,    73,     0,     0,
       0,    61,   153,     0,     0,    74,     0,    75,     0,     0,
       0,     0,     0,    76,     0,    77,    78,    79,    80,    81,
      82,   154,   142,     0,   143,     0,     0,     0,     0,     0,
     144,   145,     0,     0,     0,    38,   146,     0,   147,    18,
     148,   149,     0,     0,   150,   151,     0,   152,    19,  -190,
       0,     0,     0,    72,    73,     0,     0,     0,    61,     0,
      39,   105,    74,    40,    75,    41,     0,     0,   215,     0,
      76,    43,    77,    78,    79,    80,    81,    82,   154,    72,
      73,     0,     0,     0,    61,     0,     0,    44,    74,     0,
      75,     0,     0,     0,   287,     0,    76,     0,    77,    78,
      79,    80,    81,    82,   211,    72,    73,     0,     0,     0,
       0,     0,     0,     0,    74,     0,    75,     0,     0,     0,
       0,     0,    76,     0,    77,    78,    79,    80,    81,    82,
      83,    72,    73,     0,     0,     0,   205,     0,     0,     0,
      74,     0,    75,     0,     0,     0,     0,     0,    76,     0,
      77,    78,    79,    80,    81,    82,   206,    72,    73,   270,
       0,     0,     0,     0,     0,     0,    74,     0,    75,     0,
       0,     0,     0,     0,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    72,    73,     0,     0,     0,   280,     0,
       0,     0,    74,     0,    75,     0,     0,     0,     0,     0,
      76,     0,    77,    78,    79,    80,    81,    82,   281,    72,
      73,     0,     0,     0,     0,     0,     0,     0,    74,     0,
      75,     0,     0,     0,     0,     0,    76,     0,    77,    78,
      79,    80,    81,    82,    83,    72,    73,     0,     0,     0,
       0,    72,    73,     0,    74,     0,    75,     0,     0,     0,
       0,     0,    76,     0,    77,    78,    79,    80,    81,    82,
     211,    78,    79,    80,    81,    82,    83,  -191,     0,     0,
       0,     0,     0,     0,     0,     0,  -191,     0,     0,     0,
     116,   117,   118,   231,   232,   119,   120,   121,   122,   123,
    -191,     0,     0,     0,     0,     0,     0,     0,     0,   247,
       0,     0,     0,   116,   117,   118,   231,   232,   119,   120,
     121,   122,   123,  -191,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,   116,   117,   118,   231,
     232,   119,   120,   121,   122,   123,  -191,     0,     0,     0,
       0,     0,     0,     0,     0,  -179,     0,     0,     0,   116,
     117,   118,   231,   232,   119,   120,   121,   122,   123,   184,
       0,     0,     0,     0,     0,     0,   116,   117,   118,     0,
       0,   119,   120,   121,   122,   123,   243,     0,     0,     0,
       0,   116,   117,   118,     0,     0,   119,   120,   121,   122,
     123,   301,     0,     0,     0,   116,   117,   118,     0,     0,
     119,   120,   121,   122,   123,    61,     0,     0,     0,   116,
     117,   118,     0,     0,   119,   120,   121,   122,   123,   116,
     117,   118,     0,     0,   119,   120,   121,   122,   123
};

static const yytype_int16 yycheck[] =
{
      30,    88,    31,    33,    34,   147,    36,    41,    27,    35,
      40,   157,   147,    43,   149,   247,   151,   157,    30,   296,
      34,   285,    34,    28,    54,    42,    33,     5,     5,    57,
      60,    18,    19,     4,    64,    52,    33,     8,    33,    73,
      27,     1,     4,    57,    31,   322,     8,    34,   280,    57,
      57,    25,    30,    30,    28,    33,    33,    35,    35,   323,
      57,    39,    39,    41,    41,    25,     4,    38,    28,   301,
       8,    34,   218,   103,   108,   105,    38,    64,   218,    57,
      57,    98,    33,    30,   101,   115,    20,    34,     1,    37,
     124,   110,     5,     4,    57,     0,   130,     8,     4,   129,
      38,   135,     8,    37,   246,    33,    57,   249,   137,    33,
     144,   145,   129,   147,    30,   149,   103,   151,     5,    32,
      33,   208,    35,   110,    40,   151,    28,    38,    41,    57,
      43,    57,    38,    57,   151,   152,    49,     5,    51,    52,
      53,    54,    55,    56,    57,     4,    33,    39,    35,     8,
     137,    30,    31,     1,    41,    34,   190,     1,    29,    30,
     190,     5,   192,    31,   151,    33,    34,    35,    16,    40,
      57,     5,    30,    41,    18,     5,    30,   312,    28,    38,
      34,   215,    40,    27,    28,    34,   212,    30,     1,    57,
     277,    34,     5,    56,    57,   221,   222,    31,   224,    33,
     234,    35,    39,    33,   238,    35,   240,    41,    36,   226,
      57,    41,     5,   230,    30,   249,     1,    38,   252,    32,
      33,    34,    35,    57,   258,    18,   143,    57,    41,   146,
      43,    34,    57,   150,    27,    28,    49,   254,    51,    52,
      53,    54,    55,    56,    57,    28,    28,    32,    33,    29,
      34,    30,    30,   287,   288,    30,    41,   274,    43,   285,
     286,    40,    40,    28,    49,    28,    51,    52,    53,    54,
      55,    56,    57,    37,   304,    30,    31,    28,   312,    34,
     314,    30,    31,    28,     1,    34,     3,     4,    34,    39,
      14,     8,     9,    10,    21,     5,   330,   323,    15,   329,
      17,    18,    19,    20,    39,    34,    23,    24,    34,    26,
      27,    28,    22,    29,    28,    32,    33,    40,    37,    34,
      37,    38,    34,    33,    41,    35,    43,    32,    33,    29,
      35,    41,    49,    14,    51,    52,    53,    54,    55,    56,
      57,     1,    30,     3,     4,    34,    12,    57,     8,     9,
      10,    38,     5,    32,    33,    15,    35,    17,    18,    19,
      20,    36,   103,    23,    24,    16,    26,    27,    28,    22,
     234,   249,    32,    33,    87,   302,   258,    37,    38,    -1,
      33,    41,    35,    43,    32,    33,    -1,    35,    41,    49,
      30,    51,    52,    53,    54,    55,    56,    57,     1,    39,
       3,    41,    42,    43,    57,    -1,     9,    10,    -1,    49,
      50,    -1,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    49,    30,    51,    52,
      53,    54,    55,    56,    57,     1,    39,     3,    41,    42,
      43,    -1,    -1,     9,    10,    -1,    49,    50,    -1,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    23,    24,    -1,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    -1,    -1,
      -1,    37,    38,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,     1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,     5,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    23,    24,    -1,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    37,    -1,
      30,    31,    41,    33,    43,    35,    -1,    -1,    21,    -1,
      49,    41,    51,    52,    53,    54,    55,    56,    57,    32,
      33,    -1,    -1,    -1,    37,    -1,    -1,    57,    41,    -1,
      43,    -1,    -1,    -1,    21,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    32,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    32,    33,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    32,    33,    -1,    -1,    -1,
      -1,    32,    33,    -1,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    52,    53,    54,    55,    56,    57,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    46,    47,    48,    49,    50,    36,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    48,    49,
      50,    37,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    47,    48,    49,    50,    37,    -1,    -1,    -1,    41,
      42,    43,    -1,    -1,    46,    47,    48,    49,    50,    41,
      42,    43,    -1,    -1,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    16,    59,    60,    56,    57,    61,     0,    28,
       1,    62,    25,    28,    61,     1,    88,     5,    18,    27,
      28,    79,    82,    87,    90,    57,    91,    33,    57,    84,
      85,    33,    81,    85,    33,    74,    76,    84,     5,    30,
      33,    35,    39,    41,    57,    65,    66,    67,    68,    71,
      73,    81,    39,    65,    31,    34,    57,    65,    77,    78,
      85,    37,    63,    92,    33,    65,    75,    76,    28,    74,
      57,    65,    32,    33,    41,    43,    49,    51,    52,    53,
      54,    55,    56,    57,    69,    93,    94,    98,    99,   100,
     105,   106,   107,   108,    86,    93,    65,    72,    39,    28,
      86,    39,    65,    30,    34,    31,    65,     1,    64,    65,
      83,    34,    57,     1,    93,    36,    41,    42,    43,    46,
      47,    48,    49,    50,    95,    96,    97,    94,    32,    33,
      35,   100,   101,   102,   103,    30,    86,    80,    86,    78,
      65,    38,     1,     3,     9,    10,    15,    17,    19,    20,
      23,    24,    26,    38,    57,    63,    85,    86,    87,    89,
      93,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   124,   129,   135,   136,   137,   138,
     139,    34,    84,    34,    34,    65,    70,    93,    33,     1,
      33,    34,    41,    57,    65,    86,    93,    93,    34,    81,
      57,   112,    93,    93,   112,    37,    57,    93,    99,   110,
     125,    57,    93,   110,   112,    21,    63,    85,    86,    93,
     110,   130,   131,   132,   134,    86,    40,    39,    96,    97,
     140,    44,    45,    28,    29,    28,    65,    34,    30,   104,
      30,    31,    34,    36,    28,   122,    40,    37,    32,    28,
      37,    63,    28,    93,    40,    39,    63,    63,    28,    63,
      86,    39,    39,    86,   109,    34,    93,    30,    31,    34,
      34,    30,    34,     4,     8,    38,   123,    99,   122,    33,
      37,    57,    93,   125,   126,    14,    93,    21,    21,    93,
     130,    34,    30,    34,    34,    86,    29,    32,    38,    22,
     122,    37,    37,     4,     8,    38,   127,    63,   119,    63,
      93,    93,    28,    34,    64,    33,    34,    38,   122,   126,
      65,   128,    29,    14,   110,   133,    22,    38,    38,    30,
      64,    63,   119,    34,    65
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1875 "goYacc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 418 ".\\goYacc.y"


void main (int argc, char const *argv[]) {

	outputFile = fopen("parsedProgram.output", "w");
	yyin = fopen(argv[1], "r");

	do {
		if(yyparse()) {
			printf("Failure/Too many errors\n");
			exit(0);
		}
	} while (!feof(yyin));
	printf("\nFile parsed successfully");
	printf("\nSymbol Table generated\n");
}


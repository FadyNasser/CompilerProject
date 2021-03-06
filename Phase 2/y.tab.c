
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
#line 1 "project.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "LinkedList.h"
#include <math.h>
/* prototypes */
nodeType * opr(int oper, int nops, ...);
nodeType * id(int index, int type, int brace, permission perm, char * name);
nodeType * getId(char * name, int brace);
nodeType * con(char* value, int type);
void freeNode(nodeType *p);
void ftoa(float n,char res[], int afterpoint);
int ex(nodeType *p) ;//phase 2 semantic analyser;
int yyerror(char *);
int yyerrorvar(char *s, char *var);
int yylex(void);
int yylineno;
FILE * f1;
FILE * f2; 
FILE * yyin;
/******* Do not edit - for symbol Table *****************************************/
// extern struct symTableNode * head ;
// extern struct symTableNode * current;
// extern struct SymTableData* getSymTableData(int type, int init, int used, int brace,char * name,permission perm );
// extern void insertFirst(int index, struct SymTableData* data);
// extern struct symTableNode* deleteFirst();
// extern int length();
// extern bool isEmpty() ;
// extern struct SymTableData* find(int index);
// extern void printList();
// extern void setBrace(int findBrace);
// extern void setUsed(int findIndex);
// extern void setInit(int findIndex);
// extern void printUsed();
// extern void printNotUsed();
// extern void printInit();
// extern void printNotInit();
// extern bool nameUniqueInScope(char * name, int brace);
// extern int getIndex(char * name, int brace);
/*********************************************************************************/
int indexCount=0;
int brace=0;
int counter;


/* Line 189 of yacc.c  */
#line 121 "y.tab.c"

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
     COMMA = 258,
     RET = 259,
     BREAK = 260,
     DEFAULT = 261,
     SWITCH = 262,
     DO = 263,
     CASE = 264,
     OBRACE = 265,
     EBRACE = 266,
     ORBRACKET = 267,
     ERBRACKET = 268,
     SEMICOLON = 269,
     COLON = 270,
     INCREMENT = 271,
     DECREMENT = 272,
     PEQUAL = 273,
     MEQUAL = 274,
     MULEQUAL = 275,
     DIVEQUAL = 276,
     GREATER = 277,
     LESS = 278,
     GE = 279,
     LE = 280,
     EQ = 281,
     NE = 282,
     PLUS = 283,
     MINUS = 284,
     MUL = 285,
     DIV = 286,
     REM = 287,
     AND = 288,
     OR = 289,
     NOT = 290,
     WHILE = 291,
     FOR = 292,
     IF = 293,
     ELSE = 294,
     PRINT = 295,
     INT = 296,
     FLOAT = 297,
     DOUBLE = 298,
     LONG = 299,
     CHAR = 300,
     STRING = 301,
     CONST = 302,
     ASSIGN = 303,
     POWER = 304,
     FALSE = 305,
     TRUE = 306,
     BOOL = 307,
     INTEGERNUMBER = 308,
     FLOATNUMBER = 309,
     TEXT = 310,
     CHARACTER = 311,
     IDENTIFIER = 312,
     IFX = 313,
     UMINUS = 314
   };
#endif
/* Tokens.  */
#define COMMA 258
#define RET 259
#define BREAK 260
#define DEFAULT 261
#define SWITCH 262
#define DO 263
#define CASE 264
#define OBRACE 265
#define EBRACE 266
#define ORBRACKET 267
#define ERBRACKET 268
#define SEMICOLON 269
#define COLON 270
#define INCREMENT 271
#define DECREMENT 272
#define PEQUAL 273
#define MEQUAL 274
#define MULEQUAL 275
#define DIVEQUAL 276
#define GREATER 277
#define LESS 278
#define GE 279
#define LE 280
#define EQ 281
#define NE 282
#define PLUS 283
#define MINUS 284
#define MUL 285
#define DIV 286
#define REM 287
#define AND 288
#define OR 289
#define NOT 290
#define WHILE 291
#define FOR 292
#define IF 293
#define ELSE 294
#define PRINT 295
#define INT 296
#define FLOAT 297
#define DOUBLE 298
#define LONG 299
#define CHAR 300
#define STRING 301
#define CONST 302
#define ASSIGN 303
#define POWER 304
#define FALSE 305
#define TRUE 306
#define BOOL 307
#define INTEGERNUMBER 308
#define FLOATNUMBER 309
#define TEXT 310
#define CHARACTER 311
#define IDENTIFIER 312
#define IFX 313
#define UMINUS 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 47 "project.y"

    int iValue;                 /* integer value */
	float fValue;               /* float Value */
    char * sValue;              /* string value */
	char * cValue;               /* character value */
	char * id ;                 /* id value */
    nodeType *nPtr;             /* node pointer */



/* Line 214 of yacc.c  */
#line 286 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 298 "y.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   303

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    18,    24,    30,
      33,    39,    47,    59,    65,    73,    79,    83,    85,    87,
      98,   103,   107,   112,   113,   115,   118,   120,   122,   124,
     126,   128,   131,   134,   137,   140,   143,   145,   147,   149,
     153,   157,   161,   165,   169,   173,   176,   179,   182,   186,
     189,   192,   196,   200,   204,   208,   210,   214,   218,   222,
     225,   229,   233,   237,   241,   245,   249,   253,   255,   257,
     259,   261,   263,   265,   267,   273
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    -1,    62,    63,    -1,    -1,    69,
      57,    14,    -1,    57,    48,    76,    14,    -1,    69,    57,
      48,    76,    14,    -1,    70,    57,    48,    76,    14,    -1,
      72,    14,    -1,    36,    12,    76,    13,    63,    -1,     8,
      65,    36,    12,    76,    13,    14,    -1,    37,    12,    57,
      48,    53,    14,    76,    14,    73,    13,    65,    -1,    38,
      12,    76,    13,    65,    -1,    38,    12,    76,    13,    65,
      39,    65,    -1,     7,    12,    57,    13,    66,    -1,    40,
      76,    14,    -1,    64,    -1,    65,    -1,    69,    57,    12,
      13,    10,    68,     4,    76,    14,    11,    -1,    10,    67,
      68,    11,    -1,    10,    67,    11,    -1,    10,    67,    77,
      11,    -1,    -1,    63,    -1,    68,    63,    -1,    41,    -1,
      42,    -1,    45,    -1,    46,    -1,    52,    -1,    47,    41,
      -1,    47,    42,    -1,    47,    45,    -1,    47,    46,    -1,
      47,    52,    -1,    54,    -1,    53,    -1,    57,    -1,    71,
      28,    71,    -1,    71,    29,    71,    -1,    71,    30,    71,
      -1,    71,    31,    71,    -1,    71,    32,    71,    -1,    71,
      49,    71,    -1,    29,    71,    -1,    57,    16,    -1,    57,
      17,    -1,    12,    71,    13,    -1,    57,    16,    -1,    57,
      17,    -1,    57,    18,    71,    -1,    57,    19,    71,    -1,
      57,    20,    71,    -1,    57,    21,    71,    -1,    72,    -1,
      57,    48,    71,    -1,    76,    33,    76,    -1,    76,    34,
      76,    -1,    35,    76,    -1,    75,    22,    75,    -1,    75,
      23,    75,    -1,    75,    24,    75,    -1,    75,    25,    75,
      -1,    75,    27,    75,    -1,    75,    26,    75,    -1,    12,
      74,    13,    -1,    71,    -1,    56,    -1,    50,    -1,    51,
      -1,    55,    -1,    75,    -1,    74,    -1,     6,    15,    68,
       5,    14,    -1,     9,    53,    15,    68,     5,    14,    77,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    82,    83,    86,    88,    91,    93,    95,
      97,    99,   101,   107,   109,   111,   114,   117,   119,   124,
     129,   130,   133,   136,   139,   140,   142,   143,   144,   145,
     146,   149,   150,   151,   152,   153,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   171,
     172,   173,   174,   175,   176,   180,   181,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   198,   199,   200,
     201,   202,   207,   208,   210,   211
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMA", "RET", "BREAK", "DEFAULT",
  "SWITCH", "DO", "CASE", "OBRACE", "EBRACE", "ORBRACKET", "ERBRACKET",
  "SEMICOLON", "COLON", "INCREMENT", "DECREMENT", "PEQUAL", "MEQUAL",
  "MULEQUAL", "DIVEQUAL", "GREATER", "LESS", "GE", "LE", "EQ", "NE",
  "PLUS", "MINUS", "MUL", "DIV", "REM", "AND", "OR", "NOT", "WHILE", "FOR",
  "IF", "ELSE", "PRINT", "INT", "FLOAT", "DOUBLE", "LONG", "CHAR",
  "STRING", "CONST", "ASSIGN", "POWER", "FALSE", "TRUE", "BOOL",
  "INTEGERNUMBER", "FLOATNUMBER", "TEXT", "CHARACTER", "IDENTIFIER", "IFX",
  "UMINUS", "$accept", "program", "function", "stmt", "func", "braceScope",
  "switchScope", "braceIncrementor", "stmtlist", "Type", "Constant",
  "no_declaration", "increments", "forExpression", "booleanExpression",
  "DataTypes", "expression", "caseExpression", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      65,    65,    66,    67,    68,    68,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    76,    76,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     4,     5,     5,     2,
       5,     7,    11,     5,     7,     5,     3,     1,     1,    10,
       4,     3,     4,     0,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     2,
       2,     3,     3,     3,     3,     1,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,    23,     0,     0,     0,
       0,    26,    27,    28,    29,     0,    30,     0,     3,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,    70,    37,    36,    71,    68,    38,
      67,    73,    72,     0,    31,    32,    33,    34,    35,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,    21,    24,     0,     0,     0,     0,    67,    73,     0,
       0,    45,    59,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
      51,    52,    53,    54,     0,     0,     5,     0,     0,     0,
       0,    20,    25,     0,     0,     0,    48,    66,     0,    39,
      40,    41,    42,    43,    44,    60,    61,    62,    63,    65,
      64,    57,    58,     6,     0,     0,     0,    23,    15,     0,
      10,     0,    13,     0,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,    14,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,    19,    74,     0,    56,    12,     0,    75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    62,    19,    20,   128,    26,    63,    21,
      22,    40,    23,   157,    41,    42,    43,   143
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -113
static const yytype_int16 yypact[] =
{
    -113,    44,   222,  -113,    -6,    36,  -113,    42,    43,    51,
      29,  -113,  -113,  -113,  -113,   239,  -113,   223,  -113,  -113,
    -113,    11,    14,    58,    17,    41,   168,    29,    24,    29,
      29,    16,    29,  -113,  -113,  -113,  -113,  -113,  -113,    15,
     224,  -113,   270,    73,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,    16,    16,    16,    16,    29,    -1,    48,  -113,    78,
      53,  -113,  -113,   181,    -4,    57,     1,   -12,    99,   -11,
      16,  -113,  -113,  -113,  -113,    16,    16,    16,    16,    16,
      16,   144,   144,   144,   144,   144,   144,  -113,    29,    29,
     224,   224,   224,   224,    81,   104,  -113,    29,    29,   108,
      29,  -113,  -113,   222,    66,    36,  -113,  -113,   -12,     8,
       8,    75,    75,    75,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,   116,    89,   113,  -113,  -113,    87,
    -113,   114,    90,   222,  -113,  -113,     6,   117,    29,    36,
      52,   122,   100,   131,  -113,   150,  -113,    29,   222,   137,
    -113,    97,   202,   103,   222,   229,  -113,   155,   146,   160,
     125,    16,    36,  -113,  -113,   166,   224,  -113,     6,  -113
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,    -2,  -113,    -3,  -113,    54,  -112,  -113,
    -113,   -27,    18,  -113,   156,   217,   -22,    19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      18,   106,    25,    67,    71,    64,    24,    66,    69,   103,
      72,    95,   141,    96,   105,   142,    75,    76,    77,    78,
      79,   140,    88,    89,    90,    91,    92,    93,    70,    88,
      89,    73,    74,    94,    88,    89,   153,    80,    77,    78,
      79,    30,   160,   108,     3,    31,     6,    97,   109,   110,
     111,   112,   113,   114,    27,    28,   147,    80,    31,     4,
       5,   102,     6,    29,    32,   100,   121,   122,    56,    35,
      36,    57,    58,    39,    59,   125,   126,    60,   129,    33,
      34,    65,    35,    36,    37,    38,    39,    87,     7,     8,
       9,    99,    10,    11,    12,   123,    98,    13,    14,    15,
     137,   130,   132,   134,    16,   104,    88,    89,   159,    17,
       4,     5,   107,     6,    88,    89,   145,   124,   127,   131,
      88,    89,    88,    89,    80,   152,   133,   135,   138,   139,
     165,   144,     4,     5,   166,     6,   146,   148,   102,     7,
       8,     9,   150,    10,    11,    12,    88,    89,    13,    14,
      15,   102,   154,   149,   155,    16,    70,   163,   102,   167,
      17,     7,     8,     9,   151,    10,    11,    12,   162,   156,
      13,    14,    15,    31,   164,     4,     5,    16,     6,    61,
     168,   136,    17,    88,    89,     0,    68,   169,     4,     5,
       0,     6,   101,     0,    33,    34,     0,    35,    36,    37,
      38,    39,     0,     0,     7,     8,     9,     0,    10,    11,
      12,     0,     0,    13,    14,    15,   158,     7,     8,     9,
      16,    10,    11,    12,     0,    17,    13,    14,    15,     4,
       5,     0,     6,    16,     0,    88,    89,     0,    17,    49,
      50,    51,    52,    53,    54,    49,    50,    51,    52,    53,
      54,     0,    75,    76,    77,    78,    79,     0,     7,     8,
       9,     0,    10,    11,    12,     0,     0,    13,    14,    15,
       0,    55,     0,    80,    16,     0,     0,   161,     0,    17,
      44,    45,     0,     0,    46,    47,     0,     0,     0,     0,
       0,    48,    81,    82,    83,    84,    85,    86,   115,   116,
     117,   118,   119,   120
};

static const yytype_int16 yycheck[] =
{
       2,    13,     5,    30,    31,    27,    12,    29,    30,    13,
      32,    12,     6,    14,    13,     9,    28,    29,    30,    31,
      32,   133,    33,    34,    51,    52,    53,    54,    12,    33,
      34,    16,    17,    55,    33,    34,   148,    49,    30,    31,
      32,    12,   154,    70,     0,    29,    10,    48,    75,    76,
      77,    78,    79,    80,    12,    12,     4,    49,    29,     7,
       8,    63,    10,    12,    35,    12,    88,    89,    57,    53,
      54,    57,    14,    57,    57,    97,    98,    36,   100,    50,
      51,    57,    53,    54,    55,    56,    57,    14,    36,    37,
      38,    13,    40,    41,    42,    14,    48,    45,    46,    47,
      13,   103,   105,    14,    52,    48,    33,    34,     5,    57,
       7,     8,    13,    10,    33,    34,   138,    13,    10,    53,
      33,    34,    33,    34,    49,   147,    10,    14,    14,    39,
       5,    14,     7,     8,   161,    10,   139,    15,   140,    36,
      37,    38,    11,    40,    41,    42,    33,    34,    45,    46,
      47,   153,    15,    53,    57,    52,    12,    11,   160,   162,
      57,    36,    37,    38,    14,    40,    41,    42,    13,   151,
      45,    46,    47,    29,    14,     7,     8,    52,    10,    11,
      14,   127,    57,    33,    34,    -1,    30,   168,     7,     8,
      -1,    10,    11,    -1,    50,    51,    -1,    53,    54,    55,
      56,    57,    -1,    -1,    36,    37,    38,    -1,    40,    41,
      42,    -1,    -1,    45,    46,    47,    14,    36,    37,    38,
      52,    40,    41,    42,    -1,    57,    45,    46,    47,     7,
       8,    -1,    10,    52,    -1,    33,    34,    -1,    57,    16,
      17,    18,    19,    20,    21,    16,    17,    18,    19,    20,
      21,    -1,    28,    29,    30,    31,    32,    -1,    36,    37,
      38,    -1,    40,    41,    42,    -1,    -1,    45,    46,    47,
      -1,    48,    -1,    49,    52,    -1,    -1,    48,    -1,    57,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    22,    23,    24,    25,    26,    27,    81,    82,
      83,    84,    85,    86
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,    62,     0,     7,     8,    10,    36,    37,    38,
      40,    41,    42,    45,    46,    47,    52,    57,    63,    64,
      65,    69,    70,    72,    12,    65,    67,    12,    12,    12,
      12,    29,    35,    50,    51,    53,    54,    55,    56,    57,
      71,    74,    75,    76,    41,    42,    45,    46,    52,    16,
      17,    18,    19,    20,    21,    48,    57,    57,    14,    57,
      36,    11,    63,    68,    76,    57,    76,    71,    74,    76,
      12,    71,    76,    16,    17,    28,    29,    30,    31,    32,
      49,    22,    23,    24,    25,    26,    27,    14,    33,    34,
      71,    71,    71,    71,    76,    12,    14,    48,    48,    13,
      12,    11,    63,    13,    48,    13,    13,    13,    71,    71,
      71,    71,    71,    71,    71,    75,    75,    75,    75,    75,
      75,    76,    76,    14,    13,    76,    76,    10,    66,    76,
      63,    53,    65,    10,    14,    14,    67,    13,    14,    39,
      68,     6,     9,    77,    14,    76,    65,     4,    15,    53,
      11,    14,    76,    68,    15,    57,    72,    73,    14,     5,
      68,    48,    13,    11,    14,     5,    71,    65,    14,    77
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
        case 3:

/* Line 1455 of yacc.c  */
#line 82 "project.y"
    {ex((yyvsp[(2) - (2)].nPtr)); freeNode((yyvsp[(2) - (2)].nPtr));}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 86 "project.y"
    {(yyval.nPtr)=id(indexCount,(yyvsp[(1) - (3)].iValue),brace,Accepted,(yyvsp[(2) - (3)].id));printf("Declaration\n");indexCount++;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 88 "project.y"
    {(yyval.nPtr) = opr(ASSIGN,2, getId((yyvsp[(1) - (4)].id),brace), (yyvsp[(3) - (4)].nPtr)); printf("Assignment\n");}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 91 "project.y"
    {(yyval.nPtr) = opr(ASSIGN,2, id(indexCount,(yyvsp[(1) - (5)].iValue),brace,Accepted,(yyvsp[(2) - (5)].id)), (yyvsp[(4) - (5)].nPtr)); indexCount++; printf("Declaration and Assignment\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 93 "project.y"
    { (yyval.nPtr) = opr(ASSIGN,2, id(indexCount,(yyvsp[(1) - (5)].iValue),brace,Constant,(yyvsp[(2) - (5)].id)), (yyvsp[(4) - (5)].nPtr)); indexCount++;printf("Constant assignment\n");}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 95 "project.y"
    {(yyval.nPtr)=(yyvsp[(1) - (2)].nPtr); printf("Increments\n");}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 97 "project.y"
    {(yyval.nPtr) = opr(WHILE,2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)); printf("While loop\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 99 "project.y"
    {(yyval.nPtr) = opr(DO,2, (yyvsp[(2) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr));printf("Do while\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 104 "project.y"
    {char c[] = {}; sprintf(c,"%d",(yyvsp[(5) - (11)].iValue));(yyval.nPtr) = opr(FOR, 4, opr(ASSIGN, 2, getId((yyvsp[(3) - (11)].id),brace), con(c, 0)), (yyvsp[(7) - (11)].nPtr), (yyvsp[(9) - (11)].nPtr), (yyvsp[(11) - (11)].nPtr)); printf("For loop\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 107 "project.y"
    {(yyval.nPtr) = opr(IF, 2, (yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr));printf("If statement\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 109 "project.y"
    {(yyval.nPtr) = opr(IF, 3, (yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)); printf("If-Elsestatement\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 111 "project.y"
    {(yyval.nPtr) = opr(SWITCH, 2, getId((yyvsp[(3) - (5)].id),brace), (yyvsp[(5) - (5)].nPtr));printf("Switch case\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 114 "project.y"
    {(yyval.nPtr) = opr(PRINT, 1, (yyvsp[(2) - (3)].nPtr)); printf("Print\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 117 "project.y"
    {(yyval.nPtr)=(yyvsp[(1) - (1)].nPtr);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 119 "project.y"
    {(yyval.nPtr)=(yyvsp[(1) - (1)].nPtr); printf("New braces scope\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 124 "project.y"
    { char c[] = {}; sprintf(c,"%d",(yyvsp[(1) - (10)].iValue));  (yyval.nPtr)=opr( RET,3,con(c ,0),(yyvsp[(6) - (10)].nPtr),(yyvsp[(8) - (10)].nPtr) ); printf("function\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 129 "project.y"
    { char c[] = {}; sprintf(c,"%d",brace); (yyval.nPtr) = opr(OBRACE, 3, con(c ,0), (yyvsp[(3) - (4)].nPtr), opr(EBRACE,0)); brace--;printf("Stmt brace\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 130 "project.y"
    { char c[] = {}; sprintf(c,"%d",brace); (yyval.nPtr) = opr(OBRACE, 3, con(c ,0), NULL, opr(EBRACE,0)); brace--;printf("Empty brace\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 133 "project.y"
    { char c[] = {}; sprintf(c,"%d",brace); (yyval.nPtr) = opr(OBRACE, 3, con(c ,0), (yyvsp[(3) - (4)].nPtr), opr(EBRACE,0)); brace--;printf("case brace\n");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 136 "project.y"
    {(yyval.nPtr)=NULL; brace++;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 139 "project.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 140 "project.y"
    { (yyval.nPtr) = opr(SEMICOLON, 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 142 "project.y"
    {(yyval.iValue)=0;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 143 "project.y"
    {(yyval.iValue)=1;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 144 "project.y"
    {(yyval.iValue)=2;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 145 "project.y"
    {(yyval.iValue)=3;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 146 "project.y"
    {(yyval.iValue)=4;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 149 "project.y"
    {(yyval.iValue)=5;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 150 "project.y"
    {(yyval.iValue)=6;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 151 "project.y"
    {(yyval.iValue)=7;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 152 "project.y"
    {(yyval.iValue)=8;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 153 "project.y"
    {(yyval.iValue)=9;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 156 "project.y"
    { char c[] = {}; ftoa((yyvsp[(1) - (1)].fValue), c, 6); (yyval.nPtr) = con(c, 1); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 157 "project.y"
    { char c[] = {};sprintf(c,"%d",(yyvsp[(1) - (1)].iValue)); (yyval.nPtr) = con(c, 0); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 158 "project.y"
    { (yyval.nPtr) = getId((yyvsp[(1) - (1)].id),brace); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 159 "project.y"
    { (yyval.nPtr) = opr(PLUS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 160 "project.y"
    {(yyval.nPtr)= opr(MINUS,2,(yyvsp[(1) - (3)].nPtr),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 161 "project.y"
    {(yyval.nPtr)= opr(MUL, 2 ,(yyvsp[(1) - (3)].nPtr),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 162 "project.y"
    {(yyval.nPtr)= opr(DIV, 2 ,(yyvsp[(1) - (3)].nPtr),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 163 "project.y"
    {(yyval.nPtr)= opr(REM, 2 ,(yyvsp[(1) - (3)].nPtr),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 164 "project.y"
    {(yyval.nPtr)= opr(POWER, 2 ,(yyvsp[(1) - (3)].nPtr),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 165 "project.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 166 "project.y"
    {(yyval.nPtr)=opr(INCREMENT,1,getId((yyvsp[(1) - (2)].id),brace));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 167 "project.y"
    {(yyval.nPtr)=opr(DECREMENT,1,getId((yyvsp[(1) - (2)].id),brace));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 168 "project.y"
    {(yyval.nPtr)=(yyvsp[(2) - (3)].nPtr);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 171 "project.y"
    {(yyval.nPtr)=opr(INCREMENT,1,getId((yyvsp[(1) - (2)].id),brace));}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 172 "project.y"
    {(yyval.nPtr)=opr(DECREMENT,1,getId((yyvsp[(1) - (2)].id),brace));}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 173 "project.y"
    {(yyval.nPtr)= opr(PEQUAL, 2 ,getId((yyvsp[(1) - (3)].id),brace),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 174 "project.y"
    {(yyval.nPtr)= opr(MEQUAL, 2 ,getId((yyvsp[(1) - (3)].id),brace),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 175 "project.y"
    {(yyval.nPtr)= opr(MULEQUAL, 2 ,getId((yyvsp[(1) - (3)].id),brace),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 176 "project.y"
    {(yyval.nPtr)= opr(DIVEQUAL, 2 ,getId((yyvsp[(1) - (3)].id),brace),(yyvsp[(3) - (3)].nPtr));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 180 "project.y"
    {(yyval.nPtr)=(yyvsp[(1) - (1)].nPtr);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 181 "project.y"
    {(yyval.nPtr) = opr(ASSIGN, 2, getId((yyvsp[(1) - (3)].id),brace), (yyvsp[(3) - (3)].nPtr));}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 183 "project.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 184 "project.y"
    { (yyval.nPtr) = opr(OR , 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 185 "project.y"
    { (yyval.nPtr) = opr(NOT, 1, (yyvsp[(2) - (2)].nPtr)); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 186 "project.y"
    { (yyval.nPtr) = opr(GREATER, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 187 "project.y"
    { (yyval.nPtr) = opr(LESS, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 188 "project.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 189 "project.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 190 "project.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 191 "project.y"
    { (yyval.nPtr) = opr(EQ, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 192 "project.y"
    {  (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 198 "project.y"
    {  (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 199 "project.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].cValue), 2); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 200 "project.y"
    { (yyval.nPtr) = con("false", 4); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 201 "project.y"
    { (yyval.nPtr) = con("true", 4); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 202 "project.y"
    { (yyval.nPtr) = con((yyvsp[(1) - (1)].sValue), 3); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 207 "project.y"
    {  (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 208 "project.y"
    {  (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 210 "project.y"
    { (yyval.nPtr) = opr(DEFAULT, 2, (yyvsp[(3) - (5)].nPtr), opr(BREAK, 0)); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 211 "project.y"
    { char c[] = {}; sprintf(c,"%d",(yyvsp[(2) - (7)].iValue)); (yyval.nPtr) = opr(CASE, 4, con(c, 0), (yyvsp[(4) - (7)].nPtr), opr(BREAK, 0), (yyvsp[(7) - (7)].nPtr)); }
    break;



/* Line 1455 of yacc.c  */
#line 2166 "y.tab.c"
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
#line 215 "project.y"
 

nodeType *con(char* value, int type) 
{
    nodeType *p;

    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.value = strdup(value);
    p->con.type=type;
    return p;
}

nodeType * id(int index, int type, int brace, permission  perm, char * name)
{

	 nodeType *p;
   
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)         
		yyerror("out of memory");
	
    // check if the name already exists in the symName table
	if (!nameUniqueInScope(name,brace))
	{
		yyerrorvar("Identifier name already defined before in this scope",name);
	}

    /* copy information */
    p->type = typeId;
    p->id.index = index;

    // dont need these - get them directly from sym table -- leave them for Rana
    p->id.type 	= type;
    p->id.per 	= perm;
    p->id.name 	= strdup(name);
  
    // insert into symbol table
    int init = 0;
    int used = 0;
    struct SymTableData * data1 = getSymTableData(type,init,used,brace,name,perm);
    insertFirst(index,data1);

    return p;
}

nodeType * getId(char * name, int brace)
{
	
	// searching for the identifier's name in the Symbol Table
	// Variable found must be in a valid brace scope (!= -5)
	int index = getIndex(name,brace);

	if (index == -1)
	{
		yyerrorvar("Undeclared Variable",strdup(name));
	}
	else
	{
		nodeType *p;
		struct SymTableData * node = find(index);
	    
	    /* allocate node */
	    if ((p = malloc(sizeof(nodeType))) == NULL)         
			yyerror("out of memory");

	    /* copy information */
	    p->type = typeId;
	    
	    p->id.index = index;
	    p->id.type 	= node->symType;
	    p->id.per 	= node->symPerm;
	    p->id.name 	= strdup(node->symName);

	    return p;
	}
	
}

nodeType *opr(int oper, int nops, ...) 
{
    va_list ap;
    nodeType *p;
    int i;

    /* allocate node, extending op array */
    if ((p = malloc(sizeof(nodeType) + (nops-1) * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->opr.op[i] = va_arg(ap, nodeType*);
    va_end(ap);
    return p;
}

void freeNode(nodeType *p)
{
    int i;

    if (!p) return;
    if (p->type == typeOpr) {
        for (i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
    }
    free (p);
}

void reverse(char *str, int len) 
{
	int i=0, j=len-1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}

int toStr(int x, char str[], int d) 
{
	int i = 0;
	while (x)
	{
		str[i++] = (x%10) + '0';
		x = x/10;
	}
 
	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < d)
		str[i++] = '0';
 
	reverse(str, i);
	str[i] = '\0';
	return i;
}

void ftoa(float n, char res[], int afterpoint) 
{
	
	// Extract integer part
	int ipart = (int)n;
 
	// Extract floating part
	float fpart = n - (float)ipart;
	
 
	// convert integer part to string
	int i = toStr(ipart, res, 0);
 
	// check for display option after point
	if (afterpoint != 0)
	{
		res[i] = '.';  // add dot
 
		// Get the value of fraction part upto given no.
		// of points after dot. The third parameter is needed
		// to handle cases like 233.007
		fpart = fpart * pow(10, afterpoint);
		toStr((int)fpart, res + i + 1, afterpoint);
	}
}

int yyerror(char *s) 
{ 
	fclose(f1);
	remove("output.txt"); 
	f1=fopen("output.txt","w");
	fprintf(f1, "Syntax Error Could not parse quadruples\n"); 
	fprintf(f1, "line number : %d %s\n", yylineno,s);    
 
 	fclose(f2);
	remove("symbol.txt");
	f2 = fopen("symbol.txt","w");
	fprintf(f2, "Syntax Error was Found\n");
 	fprintf(stderr, "line number : %d %s\n", yylineno,s);    
 
	exit(0);
}
 
int yyerrorvar(char *s, char *var) 
{
	fclose(f1);
	int x = remove("output.txt");
	f1 = fopen("output.txt","w");
	fprintf(f1, "Syntax Error Could not parse quadruples\n");
 	fprintf(f1, "line number: %d %s : %s\n", yylineno,s,var);
	
	fclose(f2);
	x = remove("symbol.txt");
	f2 = fopen("symbol.txt","w");
	fprintf(f2, "Syntax Error was Found\n");
 	fprintf(f2, "line number: %d %s : %s\n", yylineno,s,var);
	
 	exit(0);
}

int main(void) 
{   
	yyin = fopen("input.txt", "r");
	f1 = fopen("output.txt","w");
	f2 = fopen("symbol.txt","w");
	
	if(!yyparse())
	{
		printf("\nParsing complete\n");
		
		//fprintf(f2,"\n");
		
		printInit(f2);
		printNotInit(f2);
		
		fprintf(f2,"-----------------------------------------------\n\n");
	
		printUsed(f2);
		printNotUsed(f2);
		
	}
	else
	{
		printf("\nParsing failed\n");
		return 0;
	}
	fclose(f1);
	fclose(f2);
	fclose(yyin);
    return 0;
}

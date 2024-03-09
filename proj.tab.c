
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
#line 2 "proj.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
	int if_cnt = 0;
	int if_done[1000];
	int if_work[1000];
	int else_if_work[1000];
	int else_work[1000];
	int if_work_cnt=0;
	int else_if_work_cnt=0;
	int else_work_cnt=0;
	int for_cnt = 0;
	int for_work[1000];
	int for_work_cnt=0;
	int while_cnt = 0;
	int while_work[1000];
	int while_work_cnt = 0;
	int switch_cs = 0;
	int switch_done = 0;
    int cnt = 0;
    char id[1000][1000];
	int id_val[1000];
	
    int check_declaration(char s[])
	{
        int i;
        for(i = 0; i < cnt; i++)
		{
            if(strcmp(id[i],s) == 0) return 1;
        }
        return 0;
    }
	
    void add_id_val(char s[],int v)
	{
        strcpy(id[cnt],s);
		id_val[cnt] = v;
        cnt++;
    }

    int get_idVal(char s[])
	{
        int i;
        for(i = 0; i < cnt; i++)
		{
            if(strcmp(id[i],s) == 0)
			{
                return id_val[i];
            }
        }
    }
	
    void set_idVal(char s[], int v)
	{
        int i;
        for(i = 0; i < cnt; i++)
		{
            if(strcmp(id[i],s) == 0) 
			{
                id_val[i] = v;
				break;
            }
        }
	}




/* Line 189 of yacc.c  */
#line 144 "proj.tab.c"

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
     ID = 258,
     NUM = 259,
     STR = 260,
     AND = 261,
     OR = 262,
     NOT = 263,
     BAND = 264,
     BOR = 265,
     NEG = 266,
     SUB = 267,
     ADD = 268,
     DIV = 269,
     MUL = 270,
     REM = 271,
     POW = 272,
     SQRT = 273,
     IA = 274,
     HEADER = 275,
     DEF = 276,
     INT = 277,
     SHURU = 278,
     MAIN = 279,
     SA = 280,
     RA = 281,
     WHILE = 282,
     FD = 283,
     PM = 284,
     PS = 285,
     SHOW = 286,
     SHOW_STR = 287,
     STRUCT = 288,
     PRIME = 289,
     SHESH = 290,
     T1 = 291,
     T2 = 292,
     SORT = 293,
     REV = 294,
     C_SUM = 295,
     BIN = 296,
     VOID = 297,
     FUNC = 298,
     THEN = 299,
     SWITCH = 300,
     CASE = 301,
     DEFAULT = 302,
     FOR = 303,
     TO = 304,
     WITH = 305,
     FACT = 306,
     CA = 307,
     SI = 308,
     SD = 309,
     MIN = 310,
     MAX = 311,
     EQ = 312,
     NE = 313,
     GT = 314,
     LT = 315,
     GE = 316,
     LE = 317,
     INC = 318,
     DEC = 319,
     COLON = 320,
     IF = 321,
     ELSE_IF = 322,
     ELSE = 323,
     LP = 324,
     RP = 325,
     FLOAT = 326,
     CHAR = 327,
     END = 328,
     SP = 329,
     ASSIGN = 330,
     GCD = 331,
     LCM = 332
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 72 "proj.y"

  char s[1000];
  int i;



/* Line 214 of yacc.c  */
#line 264 "proj.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 276 "proj.tab.c"

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
#define YYLAST   1776

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  326

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    12,    17,    19,    21,    22,
      25,    28,    31,    34,    37,    40,    43,    46,    49,    52,
      56,    58,    60,    62,    64,    68,    70,    74,    79,    85,
      91,    93,    95,    99,   103,   107,   111,   115,   118,   122,
     126,   129,   133,   137,   141,   148,   155,   162,   169,   174,
     179,   183,   187,   191,   195,   199,   203,   208,   213,   218,
     225,   230,   235,   241,   245,   252,   259,   264,   269,   275,
     281,   287,   293,   299,   307,   308,   316,   323,   324,   327,
     333,   334,   337,   343,   344,   347,   349,   351,   357,   369,
     370,   373,   375,   377,   383,   392,   393,   396,   398,   400,
     406,   412,   414,   415,   421,   426,   427,   431,   432,   435,
     446,   448,   450,   452,   454,   455,   459,   460,   465,   466,
     473,   474,   477
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      79,     0,    -1,    80,   111,   117,   112,    81,    -1,    -1,
      20,    -1,    24,    82,    84,    83,    -1,    23,    -1,    35,
      -1,    -1,    84,    85,    -1,    84,    89,    -1,    84,    92,
      -1,    84,    90,    -1,    84,    94,    -1,    84,   102,    -1,
      84,   108,    -1,    84,    93,    -1,    84,   105,    -1,    84,
      91,    -1,    86,    87,    73,    -1,    22,    -1,    71,    -1,
      72,    -1,    88,    -1,    87,    74,    88,    -1,     3,    -1,
       3,    75,    92,    -1,     3,    75,    92,    73,    -1,    31,
      69,    92,    70,    73,    -1,    32,    69,     5,    70,    73,
      -1,     4,    -1,     3,    -1,    92,    13,    92,    -1,    92,
      12,    92,    -1,    92,    15,    92,    -1,    92,     7,    92,
      -1,    92,     6,    92,    -1,     8,    92,    -1,    92,    10,
      92,    -1,    92,     9,    92,    -1,    11,    92,    -1,    92,
      14,    92,    -1,    92,    28,    92,    -1,    92,    16,    92,
      -1,    55,    69,    92,    74,    92,    70,    -1,    56,    69,
      92,    74,    92,    70,    -1,    63,    69,     3,    74,    92,
      70,    -1,    64,    69,     3,    74,    92,    70,    -1,    53,
      69,     3,    70,    -1,    54,    69,     3,    70,    -1,    92,
      57,    92,    -1,    92,    58,    92,    -1,    92,    59,    92,
      -1,    92,    60,    92,    -1,    92,    61,    92,    -1,    92,
      62,    92,    -1,    51,    69,    92,    70,    -1,    52,    69,
      92,    70,    -1,    25,    69,    92,    70,    -1,    26,    69,
      92,    74,    92,    70,    -1,    41,    69,    92,    70,    -1,
      40,    69,    92,    70,    -1,    92,    36,    92,    37,    92,
      -1,    92,    17,    92,    -1,    76,    69,    92,    74,    92,
      70,    -1,    77,    69,    92,    74,    92,    70,    -1,    18,
      69,    92,    70,    -1,    34,    69,    92,    70,    -1,    39,
      69,     5,    70,    73,    -1,    38,    69,     5,    70,    73,
      -1,    38,    69,    19,    70,    73,    -1,    30,    69,    92,
      70,    73,    -1,    29,    69,    92,    70,    73,    -1,    66,
      92,    65,    23,    96,    35,    95,    -1,    -1,    67,    92,
      65,    23,    98,    35,    95,    -1,    68,    65,    23,   100,
      35,    95,    -1,    -1,    96,    97,    -1,    31,    69,    92,
      70,    73,    -1,    -1,    98,    99,    -1,    31,    69,    92,
      70,    73,    -1,    -1,   100,   101,    -1,    85,    -1,    89,
      -1,    31,    69,    92,    70,    73,    -1,    48,     3,    65,
      92,    49,    92,    50,    92,    23,   103,    35,    -1,    -1,
     103,   104,    -1,    85,    -1,    89,    -1,    31,    69,    92,
      70,    73,    -1,    27,     3,    49,    92,    65,    23,   106,
      35,    -1,    -1,   106,   107,    -1,    85,    -1,    89,    -1,
      31,    69,    92,    70,    73,    -1,    45,   109,    23,   110,
      35,    -1,    92,    -1,    -1,   110,    46,    92,    44,    84,
      -1,   110,    47,    44,    84,    -1,    -1,    21,     3,    92,
      -1,    -1,   112,   113,    -1,    43,   114,     3,    69,   115,
      70,    65,    23,    84,    35,    -1,    42,    -1,    22,    -1,
      71,    -1,    72,    -1,    -1,    86,     3,   116,    -1,    -1,
     116,    74,    86,     3,    -1,    -1,    33,     3,    65,    23,
     118,    35,    -1,    -1,   118,    85,    -1,   118,    43,   114,
       3,    69,   115,    70,    65,    23,    84,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   102,   103,   105,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   121,
     123,   124,   125,   127,   128,   130,   145,   158,   171,   175,
     185,   186,   198,   201,   204,   207,   210,   213,   216,   219,
     222,   225,   237,   249,   261,   271,   281,   287,   291,   295,
     299,   302,   305,   308,   311,   314,   317,   326,   331,   334,
     337,   354,   359,   369,   380,   396,   414,   419,   445,   455,
     477,   506,   522,   545,   560,   561,   577,   592,   593,   595,
     601,   602,   604,   610,   611,   613,   614,   615,   622,   646,
     647,   649,   650,   651,   656,   677,   678,   680,   681,   682,
     687,   691,   696,   697,   704,   712,   713,   718,   719,   721,
     725,   726,   727,   728,   730,   731,   733,   734,   736,   737,
     741,   742,   743
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STR", "AND", "OR", "NOT",
  "BAND", "BOR", "NEG", "SUB", "ADD", "DIV", "MUL", "REM", "POW", "SQRT",
  "IA", "HEADER", "DEF", "INT", "SHURU", "MAIN", "SA", "RA", "WHILE", "FD",
  "PM", "PS", "SHOW", "SHOW_STR", "STRUCT", "PRIME", "SHESH", "T1", "T2",
  "SORT", "REV", "C_SUM", "BIN", "VOID", "FUNC", "THEN", "SWITCH", "CASE",
  "DEFAULT", "FOR", "TO", "WITH", "FACT", "CA", "SI", "SD", "MIN", "MAX",
  "EQ", "NE", "GT", "LT", "GE", "LE", "INC", "DEC", "COLON", "IF",
  "ELSE_IF", "ELSE", "LP", "RP", "FLOAT", "CHAR", "END", "SP", "ASSIGN",
  "GCD", "LCM", "$accept", "program", "header", "start", "shuru", "shesh",
  "statement", "declaration", "type", "var", "v", "assignment", "show",
  "show_str", "exp", "str_operation", "if", "elseif", "ifexecute", "ifex",
  "elseifexecute", "elseifex", "elseexecute", "elseex", "for",
  "forexecute", "forex", "while", "whileexecute", "whileex", "switch",
  "ex", "switch_case", "definition", "function", "func", "rt", "fp", "fpm",
  "struct", "ss", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    78,    79,    80,    80,    81,    82,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      86,    86,    86,    87,    87,    88,    88,    89,    90,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    94,    95,    95,    95,    96,    96,    97,
      98,    98,    99,   100,   100,   101,   101,   101,   102,   103,
     103,   104,   104,   104,   105,   106,   106,   107,   107,   107,
     108,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     114,   114,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   118
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     1,     4,     1,     1,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       1,     1,     1,     1,     3,     1,     3,     4,     5,     5,
       1,     1,     3,     3,     3,     3,     3,     2,     3,     3,
       2,     3,     3,     3,     6,     6,     6,     6,     4,     4,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     6,
       4,     4,     5,     3,     6,     6,     4,     4,     5,     5,
       5,     5,     5,     7,     0,     7,     6,     0,     2,     5,
       0,     2,     5,     0,     2,     1,     1,     5,    11,     0,
       2,     1,     1,     5,     8,     0,     2,     1,     1,     5,
       5,     1,     0,     5,     4,     0,     3,     0,     2,    10,
       1,     1,     1,     1,     0,     3,     0,     4,     0,     6,
       0,     2,    11
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     4,     0,   105,     1,     0,   118,     0,     0,   107,
      31,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,     0,     0,    37,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    35,    39,    38,    33,    32,    41,    34,    43,    63,
      42,     0,    50,    51,    52,    53,    54,    55,   120,     6,
       8,   111,   110,   112,   113,     0,    66,    58,     0,    67,
      61,    60,    56,    57,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    20,   119,     0,    21,    22,   121,
       0,    31,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     5,     9,    10,    12,    18,    11,    16,
      13,    14,    17,    15,   114,    59,    44,    45,    46,    47,
      64,    65,     0,    25,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,   116,     0,   114,    26,
      24,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,   115,     0,     0,     0,    72,    71,    28,
      29,    69,    70,    68,   100,     0,     0,     0,     0,     0,
       8,     0,    95,     0,     8,     0,     0,    74,    78,     0,
       0,     0,     0,     8,   104,     0,     0,     0,     0,    73,
     117,   109,     8,     0,     0,    94,    97,    98,    96,   103,
       0,     0,     0,     0,     0,     0,    89,     0,     0,    83,
     122,     0,     0,    79,    80,     0,     0,     0,    88,    91,
      92,    90,     0,     0,    74,    85,    86,    84,    99,     0,
       0,    74,    81,     0,    76,     0,     0,    75,     0,     0,
       0,     0,    93,     0,    87,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    72,   110,   163,   134,   164,   150,   184,
     185,   165,   166,   167,   168,   169,   170,   269,   248,   258,
     302,   312,   295,   307,   171,   292,   301,   172,   262,   278,
     173,   195,   230,     6,    32,    73,   115,   199,   233,     9,
     133
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -298
static const yytype_int16 yypact[] =
{
       2,  -298,    13,    16,  -298,    23,     8,   133,    61,  -298,
    -298,  -298,   133,   133,    -4,     9,    11,    12,    17,    19,
      21,    32,    34,    35,    37,    38,    39,    40,    43,    58,
    1686,    68,   -22,  1714,    56,   133,   133,   133,   133,   133,
     133,   133,   133,   123,   137,   133,   133,   139,   140,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   122,
     124,    57,  -298,  -298,   656,   691,   502,   726,   761,   796,
     831,   866,    76,    78,   530,   565,    75,    80,   593,   628,
    1714,  1714,    56,    56,   186,   186,   463,   463,   663,   558,
    1686,  1524,  1686,  1686,  1686,  1686,  1686,  1686,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,   147,  -298,  -298,   133,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,   133,   133,   133,   133,
     133,   133,   133,    67,   259,    83,   901,   936,   971,  1006,
    1041,  1076,  1111,  1686,  -298,  -298,    57,  -298,  -298,  -298,
     153,    82,   158,    93,    95,    96,    97,  -298,    99,   100,
     133,   167,   133,  -298,  -298,  -298,  -298,  -298,  1686,  -298,
    -298,  -298,  -298,  -298,     3,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,   168,   101,   -64,  -298,   133,   126,   133,   133,
     133,   172,    -2,   173,  1686,   149,   115,  1426,   187,   121,
     130,   133,  -298,   153,   214,   133,  1146,  1181,  1216,   125,
     134,   135,   136,  -298,   133,   169,  -298,   128,     3,  1686,
    -298,  -298,  1461,   138,   142,   143,   144,   145,   146,   152,
     -31,  1559,  -298,   159,   185,   162,   189,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,   133,   190,   133,   -12,     3,
    -298,   148,  -298,  1587,  -298,  1623,   166,   -56,  -298,   233,
     316,   216,     5,  -298,   430,   133,   133,   133,   176,  -298,
    -298,  -298,  -298,    82,   180,  -298,  -298,  -298,  -298,   430,
    1651,  1251,  1489,   228,   373,   133,  -298,   164,   229,  -298,
    -298,  1286,    60,  -298,  -298,    63,   181,   184,  -298,  -298,
    -298,  -298,   -11,   188,   -56,  -298,  -298,  -298,  -298,   133,
     192,   -56,  -298,   133,  -298,  1321,   133,  -298,  1356,   182,
    1391,   183,  -298,   191,  -298,  -298
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -298,  -298,  -298,  -298,  -298,  -298,  -167,  -132,  -156,  -298,
      62,  -195,  -298,  -298,    -7,  -298,  -298,  -297,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,
    -298,  -298,  -298,  -298,  -298,  -298,   120,    50,  -298,  -298,
    -298
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      30,   149,    70,   210,   244,    33,    34,   314,   273,   202,
     203,   267,   268,     4,   317,   245,   246,   211,   198,   256,
     310,    71,     1,   257,   311,   144,     7,   144,    74,    75,
      76,    77,    78,    79,    80,    81,   274,     5,    84,    85,
     275,     8,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   198,   273,    31,    35,   273,   277,    55,    56,
      57,    58,    59,    60,   147,   148,   147,   148,    36,   111,
      37,    38,   144,   260,    61,   144,    39,   264,    40,   144,
      41,   297,    62,   259,   303,   298,   279,   300,   304,   112,
     306,    42,   145,    43,    44,   284,    45,    46,    47,    48,
     146,   136,    49,    63,    64,    65,    66,    67,    68,   137,
     138,   139,   140,   141,   142,   143,    82,    50,   113,   114,
     276,   147,   148,    69,   147,   148,    10,    11,   147,   148,
      83,    12,    86,    87,    13,   108,   124,   109,   125,   128,
     135,    14,   174,   194,   129,   197,   183,   186,    15,    16,
     299,   187,   188,   305,   189,   190,   191,    17,   192,   193,
     196,   200,   213,    18,    19,   205,   201,   209,   212,   204,
     214,   206,   207,   208,    20,    21,    22,    23,    24,    25,
     216,   217,   232,   234,   219,   226,    26,    27,   222,   218,
      57,    58,    59,    60,   227,   228,   229,   231,   250,    28,
      29,   237,   252,   261,    61,   238,   239,   240,   241,   242,
      51,    52,    62,    53,    54,   243,    55,    56,    57,    58,
      59,    60,   251,   249,   254,   266,   270,   293,   253,   272,
     255,   283,    61,    63,    64,    65,    66,    67,    68,   285,
      62,   289,   294,   309,   308,   322,   324,   313,   280,   281,
     282,   316,   151,    11,   325,   220,   182,    12,   235,     0,
      13,    63,    64,    65,    66,    67,    68,    14,   291,     0,
       0,   144,     0,     0,    15,    16,   152,   221,   153,   154,
     155,   156,     0,    17,   157,     0,     0,   158,   159,    18,
      19,     0,   315,     0,   160,     0,   318,   161,     0,   320,
      20,    21,    22,    23,    24,    25,     0,     0,     0,   151,
      11,     0,    26,    27,    12,   162,     0,    13,     0,     0,
     147,   148,     0,     0,    14,    28,    29,     0,   144,     0,
       0,    15,    16,   152,     0,   153,   154,   155,   156,     0,
      17,   271,     0,     0,   158,   159,    18,    19,     0,     0,
       0,   160,     0,     0,   161,     0,     0,    20,    21,    22,
      23,    24,    25,     0,     0,     0,   151,    11,     0,    26,
      27,    12,   162,     0,    13,     0,     0,   147,   148,     0,
       0,    14,    28,    29,     0,   144,     0,     0,    15,    16,
     152,     0,   153,   154,   155,   156,     0,    17,   290,     0,
       0,   158,   159,    18,    19,     0,     0,     0,   160,     0,
       0,   161,     0,     0,    20,    21,    22,    23,    24,    25,
       0,     0,     0,   151,    11,     0,    26,    27,    12,   162,
       0,    13,     0,     0,   147,   148,     0,     0,    14,    28,
      29,     0,   144,     0,     0,    15,    16,   152,     0,   153,
     154,   155,   156,     0,    17,     0,     0,     0,   158,   159,
      18,    19,     0,     0,     0,   160,     0,     0,   161,    59,
      60,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,    61,     0,    26,    27,     0,   162,     0,     0,    62,
       0,   147,   148,     0,     0,     0,    28,    29,    51,    52,
       0,    53,    54,     0,    55,    56,    57,    58,    59,    60,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
      61,     0,     0,     0,     0,     0,    51,    52,    62,    53,
      54,     0,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    63,
      64,    65,    66,    67,    68,     0,    62,     0,     0,     0,
       0,    51,    52,     0,    53,    54,   118,    55,    56,    57,
      58,    59,    60,     0,     0,     0,    61,    63,    64,    65,
      66,    67,    68,    61,    62,     0,     0,     0,     0,    51,
      52,    62,    53,    54,   126,    55,    56,    57,    58,    59,
      60,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    61,    63,    64,    65,    66,    67,    68,     0,    62,
       0,     0,     0,     0,    51,    52,     0,    53,    54,   127,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
      63,    64,    65,    66,    67,    68,    61,     0,     0,     0,
       0,     0,    51,    52,    62,    53,    54,   130,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,    61,    63,    64,    65,    66,    67,
      68,    61,    62,     0,     0,     0,     0,    51,    52,    62,
      53,    54,   131,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
      63,    64,    65,    66,    67,    68,   116,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   117,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   119,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   120,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   121,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   122,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   123,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   175,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   176,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   177,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   178,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   179,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   180,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   181,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   223,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   224,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   225,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   287,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   296,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   319,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,     0,     0,     0,     0,     0,   321,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,   323,    62,     0,     0,     0,     0,    51,    52,     0,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    61,
       0,   215,     0,     0,     0,    51,    52,    62,    53,    54,
       0,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    63,    64,
      65,    66,    67,    68,     0,    62,   236,     0,     0,     0,
      51,    52,     0,    53,    54,     0,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,    63,    64,    65,    66,
      67,    68,    61,     0,   288,     0,     0,     0,     0,     0,
      62,   132,     0,     0,     0,    51,    52,     0,    53,    54,
       0,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    61,     0,     0,
       0,     0,     0,    51,    52,    62,    53,    54,     0,    55,
      56,    57,    58,    59,    60,     0,     0,     0,   247,     0,
       0,     0,     0,     0,     0,    61,    63,    64,    65,    66,
      67,    68,     0,    62,     0,     0,     0,     0,     0,    51,
      52,   263,    53,    54,     0,    55,    56,    57,    58,    59,
      60,     0,     0,     0,    63,    64,    65,    66,    67,    68,
       0,    61,     0,     0,     0,     0,     0,    51,    52,    62,
      53,    54,     0,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,   265,   286,     0,     0,     0,     0,    61,
      63,    64,    65,    66,    67,    68,     0,    62,     0,     0,
       0,     0,    51,    52,     0,    53,    54,     0,    55,    56,
      57,    58,    59,    60,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    61,     0,     0,     0,     0,     0,
       0,     0,    62,    53,    54,     0,    55,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    63,    64,    65,    66,    67,    68,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68
};

static const yytype_int16 yycheck[] =
{
       7,   133,    24,     5,    35,    12,    13,   304,     3,    73,
      74,    67,    68,     0,   311,    46,    47,    19,   174,    31,
      31,    43,    20,    35,    35,    22,     3,    22,    35,    36,
      37,    38,    39,    40,    41,    42,    31,    21,    45,    46,
      35,    33,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   218,     3,     3,    69,     3,   262,    12,    13,
      14,    15,    16,    17,    71,    72,    71,    72,    69,    22,
      69,    69,    22,   250,    28,    22,    69,   254,    69,    22,
      69,    31,    36,   249,    31,    35,   263,   292,    35,    42,
     295,    69,    35,    69,    69,   272,    69,    69,    69,    69,
      43,   118,    69,    57,    58,    59,    60,    61,    62,   126,
     127,   128,   129,   130,   131,   132,     3,    69,    71,    72,
     262,    71,    72,    65,    71,    72,     3,     4,    71,    72,
       3,     8,     3,     3,    11,    23,    70,    23,    70,    74,
       3,    18,    69,   160,    74,   162,     3,    75,    25,    26,
     292,     3,    69,   295,    69,    69,    69,    34,    69,    69,
       3,     3,    23,    40,    41,    49,    75,     5,     5,   186,
      65,   188,   189,   190,    51,    52,    53,    54,    55,    56,
       3,    70,    23,    65,   201,    70,    63,    64,   205,    69,
      14,    15,    16,    17,    70,    70,    70,   214,    23,    76,
      77,    73,    23,    65,    28,    73,    73,    73,    73,    73,
       6,     7,    36,     9,    10,    73,    12,    13,    14,    15,
      16,    17,    70,    74,    44,    69,     3,    73,   245,    23,
     247,    65,    28,    57,    58,    59,    60,    61,    62,    69,
      36,    23,    23,    69,    73,    73,    73,    69,   265,   266,
     267,    69,     3,     4,    73,   203,   146,     8,   218,    -1,
      11,    57,    58,    59,    60,    61,    62,    18,   285,    -1,
      -1,    22,    -1,    -1,    25,    26,    27,    73,    29,    30,
      31,    32,    -1,    34,    35,    -1,    -1,    38,    39,    40,
      41,    -1,   309,    -1,    45,    -1,   313,    48,    -1,   316,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,     3,
       4,    -1,    63,    64,     8,    66,    -1,    11,    -1,    -1,
      71,    72,    -1,    -1,    18,    76,    77,    -1,    22,    -1,
      -1,    25,    26,    27,    -1,    29,    30,    31,    32,    -1,
      34,    35,    -1,    -1,    38,    39,    40,    41,    -1,    -1,
      -1,    45,    -1,    -1,    48,    -1,    -1,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,     3,     4,    -1,    63,
      64,     8,    66,    -1,    11,    -1,    -1,    71,    72,    -1,
      -1,    18,    76,    77,    -1,    22,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,    -1,    34,    35,    -1,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,     3,     4,    -1,    63,    64,     8,    66,
      -1,    11,    -1,    -1,    71,    72,    -1,    -1,    18,    76,
      77,    -1,    22,    -1,    -1,    25,    26,    27,    -1,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    45,    -1,    -1,    48,    16,
      17,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    28,    -1,    63,    64,    -1,    66,    -1,    -1,    36,
      -1,    71,    72,    -1,    -1,    -1,    76,    77,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,     6,     7,    36,     9,
      10,    -1,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    57,
      58,    59,    60,    61,    62,    -1,    36,    -1,    -1,    -1,
      -1,     6,     7,    -1,     9,    10,    74,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    28,    57,    58,    59,
      60,    61,    62,    28,    36,    -1,    -1,    -1,    -1,     6,
       7,    36,     9,    10,    74,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    28,    57,    58,    59,    60,    61,    62,    -1,    36,
      -1,    -1,    -1,    -1,     6,     7,    -1,     9,    10,    74,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    28,    -1,    -1,    -1,
      -1,    -1,     6,     7,    36,     9,    10,    74,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    28,    57,    58,    59,    60,    61,
      62,    28,    36,    -1,    -1,    -1,    -1,     6,     7,    36,
       9,    10,    74,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      57,    58,    59,    60,    61,    62,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    36,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    28,
      -1,    65,    -1,    -1,    -1,     6,     7,    36,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    57,    58,
      59,    60,    61,    62,    -1,    36,    65,    -1,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    28,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    28,    -1,    -1,
      -1,    -1,    -1,     6,     7,    36,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    57,    58,    59,    60,
      61,    62,    -1,    36,    -1,    -1,    -1,    -1,    -1,     6,
       7,    44,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    28,    -1,    -1,    -1,    -1,    -1,     6,     7,    36,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    50,    23,    -1,    -1,    -1,    -1,    28,
      57,    58,    59,    60,    61,    62,    -1,    36,    -1,    -1,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    57,    58,    59,    60,    61,    62,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    20,    79,    80,     0,    21,   111,     3,    33,   117,
       3,     4,     8,    11,    18,    25,    26,    34,    40,    41,
      51,    52,    53,    54,    55,    56,    63,    64,    76,    77,
      92,     3,   112,    92,    92,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,     6,     7,     9,    10,    12,    13,    14,    15,    16,
      17,    28,    36,    57,    58,    59,    60,    61,    62,    65,
      24,    43,    81,   113,    92,    92,    92,    92,    92,    92,
      92,    92,     3,     3,    92,    92,     3,     3,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    23,    23,
      82,    22,    42,    71,    72,   114,    70,    70,    74,    70,
      70,    70,    70,    70,    70,    70,    74,    74,    74,    74,
      74,    74,    37,   118,    84,     3,    92,    92,    92,    92,
      92,    92,    92,    92,    22,    35,    43,    71,    72,    85,
      86,     3,    27,    29,    30,    31,    32,    35,    38,    39,
      45,    48,    66,    83,    85,    89,    90,    91,    92,    93,
      94,   102,   105,   108,    69,    70,    70,    70,    70,    70,
      70,    70,   114,     3,    87,    88,    75,     3,    69,    69,
      69,    69,    69,    69,    92,   109,     3,    92,    86,   115,
       3,    75,    73,    74,    92,    49,    92,    92,    92,     5,
       5,    19,     5,    23,    65,    65,     3,    70,    69,    92,
      88,    73,    92,    70,    70,    70,    70,    70,    70,    70,
     110,    92,    23,   116,    65,   115,    65,    73,    73,    73,
      73,    73,    73,    73,    35,    46,    47,    49,    96,    74,
      23,    70,    23,    92,    44,    92,    31,    35,    97,    86,
      84,    65,   106,    44,    84,    50,    69,    67,    68,    95,
       3,    35,    23,     3,    31,    35,    85,    89,   107,    84,
      92,    92,    92,    65,    84,    69,    23,    70,    65,    23,
      35,    92,   103,    73,    23,   100,    70,    31,    35,    85,
      89,   104,    98,    31,    35,    85,    89,   101,    73,    69,
      31,    35,    99,    69,    95,    92,    69,    95,    92,    70,
      92,    70,    73,    70,    73,    73
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
        case 4:

/* Line 1455 of yacc.c  */
#line 103 "proj.y"
    { printf("Header included\n"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 105 "proj.y"
    { printf("Successful compilation"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 107 "proj.y"
    { printf("Start of main\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "proj.y"
    { printf("End of main\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 130 "proj.y"
    {
				int check = check_declaration((yyvsp[(1) - (1)].s));
				if(check)
				{
					printf("Compilation Error:%s is already declared\n",(yyvsp[(1) - (1)].s));
					exit(-1);
				}
				else
				{
					add_id_val((yyvsp[(1) - (1)].s),rand());
				}
				/*printf("%d\n",cnt);
				int i;
				for(i=0;i<cnt;i++)printf("%s\n",id[i]);*/
			 ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 145 "proj.y"
    {
							int check = check_declaration((yyvsp[(1) - (3)].s));
							if(check)
							{
								printf("Compilation Error:%s is already declared\n",(yyvsp[(1) - (3)].s));
								exit(-1);
							}
							else
							{
								set_idVal((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].i));
							}
						;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 158 "proj.y"
    {
									int check = check_declaration((yyvsp[(1) - (4)].s));
									if(!check)
									{
										printf("Compilation Error:%s is not declared yet\n",(yyvsp[(1) - (4)].s));
										exit(-1);
									}
									else
									{
										set_idVal((yyvsp[(1) - (4)].s),(yyvsp[(3) - (4)].i));
									}
								;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 171 "proj.y"
    {
								printf("%d\n",(yyvsp[(3) - (5)].i));
						   ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 175 "proj.y"
    {
										int l = strlen((yyvsp[(3) - (5)].s));
										int i;
										for(i=1;i<l-1;i++)
										{
											printf("%c",(yyvsp[(3) - (5)].s)[i]);
										}
										printf("\n");
									;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 185 "proj.y"
    { (yyval.i) = (yyvsp[(1) - (1)].i) ; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 186 "proj.y"
    { 
				int check = check_declaration((yyvsp[(1) - (1)].s));
				if(!check)
				{
					printf("Compilation Error:%s is not declared yet\n",(yyvsp[(1) - (1)].s));
					exit(-1);
				}
				else
				{
					(yyval.i) = get_idVal((yyvsp[(1) - (1)].s));
				}
			  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 198 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) + (yyvsp[(3) - (3)].i) ;
					  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 201 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) - (yyvsp[(3) - (3)].i) ;
					  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 204 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) * (yyvsp[(3) - (3)].i) ;
					  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 207 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) || (yyvsp[(3) - (3)].i) ;
					 ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 210 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) && (yyvsp[(3) - (3)].i) ;
					  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 213 "proj.y"
    {
						(yyval.i) = !(yyvsp[(2) - (2)].i);
					;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 216 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) | (yyvsp[(3) - (3)].i);
					  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 219 "proj.y"
    {
						(yyval.i) = (yyvsp[(1) - (3)].i) & (yyvsp[(3) - (3)].i);
					   ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 222 "proj.y"
    {
						(yyval.i) = ~(yyvsp[(2) - (2)].i);
					  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 225 "proj.y"
    {
						if((yyvsp[(3) - (3)].i))
						{
							(yyval.i) = (yyvsp[(1) - (3)].i) / (yyvsp[(3) - (3)].i) ;
						}
						else
						{
							(yyval.i) = 0;
							printf("\nRuntime Error:Divide by zero");
							exit(-1);
						}
					  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 237 "proj.y"
    {
						if((yyvsp[(3) - (3)].i))
						{
							(yyval.i) = (yyvsp[(1) - (3)].i) / (yyvsp[(3) - (3)].i) ;
						}
						else
						{
							(yyval.i) = 0;
							printf("\nRuntime Error:Divide by zero");
							exit(-1);
						}
					 ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 249 "proj.y"
    {
						if((yyvsp[(3) - (3)].i))
						{
							(yyval.i) = (yyvsp[(1) - (3)].i) % (yyvsp[(3) - (3)].i) ;
						}
						else
						{
							(yyval.i) = 0;
							printf("\nRuntime Error:Divide by zero");
							exit(-1);
						}
					  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 261 "proj.y"
    {
									if((yyvsp[(3) - (6)].i)<(yyvsp[(5) - (6)].i))
									{
										(yyval.i) = (yyvsp[(3) - (6)].i);
									}
									else
									{
										(yyval.i) = (yyvsp[(5) - (6)].i);
									}
							   ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 271 "proj.y"
    {
									if((yyvsp[(3) - (6)].i)>(yyvsp[(5) - (6)].i))
									{
										(yyval.i) = (yyvsp[(3) - (6)].i);
									}
									else
									{
										(yyval.i) = (yyvsp[(5) - (6)].i);
									}
							   ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 281 "proj.y"
    {
								int prev = get_idVal((yyvsp[(3) - (6)].s));
								int new = prev + (yyvsp[(5) - (6)].i);
								/*printf("%d\n",new);*/
								(yyval.i) = new;
							  ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 287 "proj.y"
    {
								int prev = get_idVal((yyvsp[(3) - (6)].s));
								(yyval.i) = prev - (yyvsp[(5) - (6)].i);
							  ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 291 "proj.y"
    {
						int prev = get_idVal((yyvsp[(3) - (4)].s));
						(yyval.i) = prev + 1;
					  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 295 "proj.y"
    {
						int prev = get_idVal((yyvsp[(3) - (4)].s));
						(yyval.i) = prev - 1;
					  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 299 "proj.y"
    {
							(yyval.i) = ((yyvsp[(1) - (3)].i)==(yyvsp[(3) - (3)].i)) ;
					 ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 302 "proj.y"
    {
							(yyval.i) = ((yyvsp[(1) - (3)].i)!=(yyvsp[(3) - (3)].i)) ;
					 ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 305 "proj.y"
    {
							(yyval.i) = ((yyvsp[(1) - (3)].i)>(yyvsp[(3) - (3)].i)) ;
					 ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 308 "proj.y"
    {
							(yyval.i) = ((yyvsp[(1) - (3)].i)<(yyvsp[(3) - (3)].i)) ;
					 ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 311 "proj.y"
    {
						    (yyval.i) = ((yyvsp[(1) - (3)].i)>=(yyvsp[(3) - (3)].i)) ;
					 ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 314 "proj.y"
    {
							(yyval.i) = ((yyvsp[(1) - (3)].i)<=(yyvsp[(3) - (3)].i)) ;
					 ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 317 "proj.y"
    {
							int f = 1;
							int i;
							for(i=1;i<=(yyvsp[(3) - (4)].i);i++)
							{
								f*=i;
							}
							(yyval.i) = f ;
						;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 326 "proj.y"
    {
							double pi = 3.1416;
							double area = pi*(yyvsp[(3) - (4)].i)*(yyvsp[(3) - (4)].i);
							printf("%.6f",area);
					   ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 331 "proj.y"
    {
							(yyval.i) = (yyvsp[(3) - (4)].i)*(yyvsp[(3) - (4)].i);
					   ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 334 "proj.y"
    {
								(yyval.i) = (yyvsp[(3) - (6)].i)*(yyvsp[(5) - (6)].i);
							  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 337 "proj.y"
    {
							int b[100];
							int d = (yyvsp[(3) - (4)].i) ;
							int i=0;
							while(d>0)
							{
								b[i]=d%2;
								d/=2;
								i++;
							}
							int j;
							for(j=i-1;j>=0;j--)
							{
								printf("%d",b[j]);
							}
							printf("\n");
						;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 354 "proj.y"
    {
							int n = (yyvsp[(3) - (4)].i);
							n = (n*(n+1))/2;
							(yyval.i) = n;
						  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 359 "proj.y"
    {
								if((yyvsp[(1) - (5)].i))
								{
									(yyval.i) = (yyvsp[(3) - (5)].i);
								}
								else
								{
									(yyval.i) = (yyvsp[(5) - (5)].i);
								}
							;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 369 "proj.y"
    {
						int n = (yyvsp[(1) - (3)].i);
						int m = (yyvsp[(3) - (3)].i);
						int i;
						int ans = 1;
						for(i=1;i<=m;i++)
						{
							ans*=n;
						}
						(yyval.i) = ans;
					  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 380 "proj.y"
    {
									int n = (yyvsp[(3) - (6)].i);
									int m = (yyvsp[(5) - (6)].i);
									while(n!=m)
									{
										if(n>m)
										{
											n-=m;
										}
										else
										{
											m-=n;
										}
									}
									(yyval.i) = n;
							   ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 396 "proj.y"
    {
									int n=(yyvsp[(3) - (6)].i);
									int m=(yyvsp[(5) - (6)].i);
									int p=n*m;
									while(n!=m)
									{
										if(n>m)
										{
											n-=m;
										}
										else
										{
											m-=n;
										}
									}
									n=p/n;
									(yyval.i) = n;
							   ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 414 "proj.y"
    {
							double n = (double)(yyvsp[(3) - (4)].i);
							int ans = (int)sqrt(n);
							(yyval.i) = ans;
						 ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 419 "proj.y"
    {
							int n = (yyvsp[(3) - (4)].i);
							int flag=0;
							if(n==0 || n==1)
							{
								flag=1;
							}
							int i;
							for(i=2;i<=n/2;i++)
							{
								if(n%i==0)
								{
									flag=1;
									break;
								}
							}
							if(flag)
							{
								(yyval.i) = 0;
							}
							else
							{
								(yyval.i) = 1;
							}
						;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 445 "proj.y"
    {
							int l = strlen((yyvsp[(3) - (5)].s));
							int i;
							/*printf("%s\n",$3);*/
							for(i=l-2;i>0;i--)
							{
								printf("%c",(yyvsp[(3) - (5)].s)[i]);
							}
							printf("\n");
						;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 455 "proj.y"
    {
									int l = strlen((yyvsp[(3) - (5)].s));
									int i,j;
									for(i=1;i<l-1;i++)
									{
										for(j=i+1;j<l-1;j++)
										{
											if( (yyvsp[(3) - (5)].s)[i] > (yyvsp[(3) - (5)].s)[j])
											{
												char temp = (yyvsp[(3) - (5)].s)[i];
												(yyvsp[(3) - (5)].s)[i] = (yyvsp[(3) - (5)].s)[j];
												(yyvsp[(3) - (5)].s)[j] = temp;
											}
										}
									}
									
									for(i=1;i<l-1;i++)
									{
										printf("%c",(yyvsp[(3) - (5)].s)[i]);
									}
									printf("\n");
								;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 477 "proj.y"
    {
									int l = strlen((yyvsp[(3) - (5)].s));
									/*printf("%d\n",l);*/
									int i,j;
									for(i=1;i<l-1;i+=2)
									{
										for(j=i+2;j<l-1;j+=2)
										{

											/*printf("a %d %d\n",$3[i],$3[j]);*/
											if((yyvsp[(3) - (5)].s)[i] >(yyvsp[(3) - (5)].s)[j])
											{
												/*printf("a %d %d\n",$3[i],$3[j]);*/
												char temp = (yyvsp[(3) - (5)].s)[i];
												(yyvsp[(3) - (5)].s)[i] = (yyvsp[(3) - (5)].s)[j];
												(yyvsp[(3) - (5)].s)[j] = temp;
											}
										}
									}
										for(i=1;i<l-1;i++)
										{
												if((yyvsp[(3) - (5)].s)[i]==';' || (yyvsp[(3) - (5)].s)[j]==';')
												{
													continue;
												}
												printf("%c ",(yyvsp[(3) - (5)].s)[i]);
										}
										printf("\n");
									;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 506 "proj.y"
    {
										int n = (yyvsp[(3) - (5)].i);
										int r,c;
										for(r=1;r<=n;r++)
										{
											for(c=1;c<=n-r;c++)
											{
												printf(" ");
											}
											for(c=1;c<=2*r-1;c++)
											{
											    printf("*");
											}
											printf("\n");
										}
								   ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 522 "proj.y"
    {
										int n = (yyvsp[(3) - (5)].i);
										int i,j;
										int flag = 0;
										for(i=2;i<=n;i++)
										{
											flag = 0;
											for(j=2;j<=i/2;j++)
											{
												if(i%j==0)
												{
													flag = 1;
													break;
												}
											}
											if(flag == 0)
											{
												printf("%d ",i);
											}
										}
										printf("\n");
								   ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 545 "proj.y"
    {
													if_cnt++;
													if_done[if_cnt]=0;
													if((yyvsp[(2) - (7)].i))
													{
														int i;
														printf("Executed by if:\n");
														for(i=0;i<if_work_cnt;i++)
														{
															printf(" %d\n",if_work[i]);
														}
														if_work_cnt=0;
													}
											   ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 560 "proj.y"
    {if_cnt--;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 561 "proj.y"
    {
															if(if_done[if_cnt]==0)
															{
																if((yyvsp[(2) - (7)].i))
																{
																	if_done[if_cnt] = 1 ;
																	int i;
																	printf("Executed by else if:\n");
																	for(i=0;i<else_if_work_cnt;i++)
																	{
																		printf(" %d\n",else_if_work[i]);
																	}
																	else_if_work_cnt=0;
																}
															}
														;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 577 "proj.y"
    {
														if(if_done[if_cnt] == 0 )
														{
															if_done[if_cnt] = 1;
															int i;
															printf("Executed by else\n");
															for(i=0;i<else_work_cnt;i++)
															{
																printf(" %d\n",else_work[i]);
															}
															printf("End of else");
															else_if_work_cnt = 0;
														}
													;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 595 "proj.y"
    {
									if_done[if_cnt]=1;
									if_work[if_work_cnt]=(yyvsp[(3) - (5)].i);
									if_work_cnt++;
								;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 604 "proj.y"
    {
									if_done[if_cnt] = 1 ;
									else_if_work[else_if_work_cnt]=(yyvsp[(3) - (5)].i);
									else_if_work_cnt++;
								 ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 615 "proj.y"
    {
								if_done[if_cnt] = 1 ;
								else_work[else_work_cnt]=(yyvsp[(3) - (5)].i);
								else_work_cnt++;
							 ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 622 "proj.y"
    {
															 for_cnt++;
															 int beg = (yyvsp[(4) - (11)].i);
															 int end = (yyvsp[(6) - (11)].i);
															 int step = (yyvsp[(8) - (11)].i);
															 /*printf("%d %d %d\n",beg,end,step);*/
															 int i,j,k=1;
															 printf("Execute by for\n");
															 for(i=beg;i<end;i+=step)
															 {
															 printf("Iteration %d\n",k);
						
																for(j=0;j<for_work_cnt;j++)
																{
																	printf(" %d\n",for_work[j]);
																}
																k++;
						
		
															 }
															 printf("End of for\n");
															 for_work_cnt=0;
														;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 651 "proj.y"
    {
							 for_work[for_work_cnt] = (yyvsp[(3) - (5)].i);
							 for_work_cnt++;
						   ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 656 "proj.y"
    {
													 while_cnt++;
													 int beg = 0;
													 int end = (yyvsp[(4) - (8)].i);
													 int step = 1;
													 int i,j,k=1;
													 printf("Execute by while\n");
													 for(i=beg;i<end;i++)
													 {
														printf("Iteration %d\n",k);
				
														for(j=0;j<while_work_cnt;j++)
														{
															printf(" %d\n",while_work[j]);
														}
														k++;
													}
													 printf("End of while\n");
													 while_work_cnt=0;
												;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 682 "proj.y"
    {
							 while_work[while_work_cnt] = (yyvsp[(3) - (5)].i);
							 while_work_cnt++;
						   ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 687 "proj.y"
    {
												switch_done=0;
										;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 691 "proj.y"
    {
			switch_cs=(yyvsp[(1) - (1)].i);
			switch_done=0;
		 ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 697 "proj.y"
    {
												if((yyvsp[(3) - (5)].i)==switch_cs)
												{
													printf("Switch executed by block %d\n",(yyvsp[(3) - (5)].i));
													switch_done = 1;
												}
											;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 704 "proj.y"
    {
													if(switch_done == 0)
													{
														printf("Switch executed by default block\n");
														switch_done=1;
													}
											   ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 713 "proj.y"
    { 
							add_id_val((yyvsp[(2) - (3)].s),(yyvsp[(3) - (3)].i)); 
							printf("Definition of %s\n",(yyvsp[(2) - (3)].s));
						;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 721 "proj.y"
    {
															printf("Function Declared\n");
													   ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 737 "proj.y"
    {
											printf("Structure is declared\n");
										 ;}
    break;



/* Line 1455 of yacc.c  */
#line 3010 "proj.tab.c"
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
#line 745 "proj.y"


int yyerror(char *s)
{
	printf( "%s\n", s);
}

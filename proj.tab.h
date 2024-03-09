
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 72 "proj.y"

  char s[1000];
  int i;



/* Line 1676 of yacc.c  */
#line 136 "proj.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;




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




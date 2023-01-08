/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "limbaj.y"
{
  int intVal; //value
  char* dataType; // datatype
  char* strVal; // ID
  char *key;
}
/* Line 1529 of yacc.c.  */
#line 136 "limbaj.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


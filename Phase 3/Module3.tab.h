
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

/* Line 1676 of yacc.c  */
#line 22 "Module3.y"

	Node *astNode;
	int ival;
	char *sval;



/* Line 1676 of yacc.c  */
#line 107 "Module3.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;




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
     CLASS = 258,
     PROGRAM = 259,
     FOR = 260,
     IF = 261,
     ELSE = 262,
     CONTINUE = 263,
     BREAK = 264,
     RETURN = 265,
     CALLOUT = 266,
     ASSIGNMENT_OPERATOR = 267,
     IDENTIFIER = 268,
     VOID = 269,
     TYPE = 270,
     HEX_LITERAL = 271,
     DECIMAL_LITERAL = 272,
     CHAR_LITERAL = 273,
     BOOL_LITERAL = 274,
     STRING_LITERAL = 275,
     SEMI_COLON = 276,
     OPEN_PARENTHESES = 277,
     CLOSE_PARENTHESES = 278,
     OPEN_SQR_BRACKET = 279,
     CLOSE_SQR_BRACKET = 280,
     OPEN_BRACE = 281,
     CLOSE_BRACE = 282,
     NULL_TOKEN = 283,
     COMMA = 284,
     NOT = 285,
     OR = 286,
     AND = 287,
     NOT_EQUAL = 288,
     EQUAL_EQUAL = 289,
     LESS_EQUAL = 290,
     GREATER_EQUAL = 291,
     GREATER = 292,
     LESS = 293,
     MINUS = 294,
     PLUS = 295,
     MOD = 296,
     DIVIDE = 297,
     MULTIPLY = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



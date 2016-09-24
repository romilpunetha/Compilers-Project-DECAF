%{
#define YY_NO_UNPUT
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <ctype.h>
#include "decaf.h"
#include "utility.h"
#include "errors.h"

using namespace std;
int yyerror(char *s);
%}
digit     [0-9]
letter    [A-Za-z]
%{
    int count;
    int numbers;
%}
%option warn noyywrap noinput nounput yylineno
%%
"break" 		{return BREAK;}
"class" 		{return CLASS;}
"continue" 		{return CONTINUE;}
"else" 			{return ELSE};
"extends"		{return EXTENDS;}
"if"			{return IF;}
"new" 			{return NEW;}
"private" 		{return PRIVATE;}
"protected" 	{return PROTECTED;}
"public"		{return PUBLIC;}
"return"		{return RETURN;}
"static"		{return STATIC;}
"super"			{return SUPER;}
"this"	 		{return THIS;}
"while" 		{return WHILE;}

"abstract" | "byte" | "case" | "catch" | "const" | "default" | "do" | "double" | "final" | "finally" | "for" | "implements" | "import" | "instanceof" | "interface" | "long" | "native" | "goto" | "package" | "short" | "switch" | "synchronized" | "throw" | "throws" | "transient" | "volatile" | "try" | "cast" | "none" | "operator" | "outer" | "future" | "generic" | "inner" | "rest" | "var"	{cout<<"Forbidden keyword\n";yyterminate();}
"main()" {yylval.op_val = (string *)yytext; return MAIN;}
. {cout << "Scanner Error \n";};
%%

%{ 
	#define YY_NO_UNPUT
	using namespace std;
	#include <iostream>
	#include <stdio.h>
	#include <string>
	#include "decaf.tab.h"
	int yyerror(char *s);
%}
%option warn noyywrap noinput nounput yylineno
%%

"class"  				    			{return CLASS;}

"Program" 								{return PROGRAM;}

"int"|"boolean"							{return TYPE;}

"void"									{return VOID;}

"true"									{return BOOL_LITERAL;}

"false"									{return BOOL_LITERAL;}

"for"									{return FOR;} 

"if"									{return IF;}

"else"									{return ELSE;}

"break"									{return BREAK;}

"continue"								{return CONTINUE;}

"return"								{return RETURN;}

"callout"								{return CALLOUT;}
";"				{return SEMI_COLON;}
"("				{return OPEN_PARENTHESES ;}
")"				{return CLOSE_PARENTHESES;}
"["				{return OPEN_SQR_BRACKET;}
"]"				{return CLOSE_SQR_BRACKET;}
"{" 	 		{return OPEN_BRACE;}
"}"				{return CLOSE_BRACE;}
"null" 			{return NULL_TOKEN;}
","				{return COMMA;}
"+"				{return PLUS;}
"-"				{return MINUS;}
"*"				{return MULTIPLY;}
"%"				{return MOD;}
"/"				{return DIVIDE;}
"<"				{return LESS;}
">"				{return GREATER;}


[_a-zA-Z]+[_a-zA-Z0-9]*					{return IDENTIFIER;}

[0-9]+								    {return DECIMAL_LITERAL;}

0x[0-9a-fA-F]+							{return HEX_LITERAL;}

"="|"+="|"-="							{return ASSIGNMENT_OPERATOR;}

'(\\.|[^\\'])+'             			{return CHAR_LITERAL;}

"=="									{return EQUAL_EQUAL;}

"<="									{return LESS_EQUAL;}

">="									{return GREATER_EQUAL;}

"!="									{return NOT_EQUAL;}

"||"									{return OR;}

"&&"									{return AND;}

\/\/.*$  														

[ \t\n]*		

\"(\\.|[^\\"])*\"                   	{return STRING_LITERAL;}

[/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] 	{}

"//".*		  {}/* discard comments */
.	                        			{return *yytext;}

%%


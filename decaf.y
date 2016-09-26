%{
#define YY_NO_UNPUT
#include <iostream>
#include<bits/stdc++.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int yyerror(char *s);
int yylex(void);
string * temp;
FILE * fp= fopen ("bison_output.txt", "w");
%}



%token CLASS
%token PROGRAM
%token FOR
%token IF
%token ELSE
%token CONTINUE
%token BREAK
%token RETURN
%token CALLOUT
%token ASSIGNMENT_OPERATOR
%token IDENTIFIER
%token VOID
%token TYPE
%token HEX_LITERAL
%token DECIMAL_LITERAL
%token CHAR_LITERAL
%token BOOL_LITERAL
%token STRING_LITERAL
%token SEMI_COLON
%token OPEN_PARENTHESES 
%token CLOSE_PARENTHESES
%token OPEN_SQR_BRACKET
%token CLOSE_SQR_BRACKET
%token OPEN_BRACE
%token CLOSE_BRACE
%token NULL_TOKEN
%token COMMA
%token NOT
%left TYPE

%nonassoc ELSE
%nonassoc '='
%left OR
%left AND
%nonassoc EQUAL_EQUAL NOT_EQUAL
%nonassoc LESS GREATER GREATER_EQUAL LESS_EQUAL 
%left PLUS MINUS 
%left MULTIPLY DIVIDE MOD
%nonassoc '!' UMINUS
%nonassoc '[' '.'


%%


program: 					CLASS PROGRAM  OPEN_BRACE field_decl_multiple method_decl_multiple CLOSE_BRACE
						;
																		
field_decl_multiple:		/*epsilon*/  				                
							|field_decl_multiple field_decl_single SEMI_COLON 	
							;

field_decl_single: 			TYPE idList
							;

idList:                     IDENTIFIER id_single                        
                            |IDENTIFIER OPEN_SQR_BRACKET int_literal CLOSE_SQR_BRACKET id_single   
							;
							
id_single: 					/*epsilon*/  								
							|COMMA IDENTIFIER id_single 					
							|COMMA IDENTIFIER OPEN_SQR_BRACKET int_literal CLOSE_SQR_BRACKET id_single		
							;
							
						
method_decl_multiple:		/*epsilon*/ 								
							|method_decl_single method_decl_multiple 
							;

method_decl_single: 		TYPE IDENTIFIER argumentList block 	        
                            |VOID IDENTIFIER argumentList block 	   
							;

argumentList:               OPEN_PARENTHESES CLOSE_PARENTHESES                                    
                            |OPEN_PARENTHESES TYPE IDENTIFIER arg CLOSE_PARENTHESES 
							;							

arg:					    /*epsilon*/ 								
							|COMMA TYPE IDENTIFIER arg
							;

block:						OPEN_BRACE var_decl_multiple statement_multiple CLOSE_BRACE
							;

var_decl_multiple:			/*epsilon*/ 								
							|var_decl_single SEMI_COLON var_decl_multiple
							;							

var_decl_single:			TYPE IDENTIFIER variableList		
							;

variableList:				/*epsilon*/ 								
							|COMMA IDENTIFIER variableList 		
							;

statement_multiple: 		/*epsilon*/ 								
							|statement_multiple statement_single
							;

statement_single: 			location ASSIGNMENT_OPERATOR expr SEMI_COLON 		
							|method_call SEMI_COLON 							
							|IF condition block else_block 		    	
							|FOR IDENTIFIER ASSIGNMENT_OPERATOR expr COMMA expr block 	
							|RETURN return_expr SEMI_COLON 					
							|BREAK SEMI_COLON 									
							|CONTINUE SEMI_COLON 								
							|block 					
							;

else_block:                 /*epsilon*/                  
                            |ELSE block      
							;

condition:                  OPEN_PARENTHESES expr CLOSE_PARENTHESES                                

return_expr:                /*epsilon*/                                   
                            |expr         
							;

expr:						location 							
							|method_call 							
							|literal 									
							|arith_expr 							
							|rel_expr 					              
							|equal_expr 						       
							|condition_expr 					
							|MINUS expr 								
							|'!' expr 								
							|OPEN_PARENTHESES expr CLOSE_PARENTHESES
							;
							
location:					IDENTIFIER 									
							|IDENTIFIER OPEN_SQR_BRACKET expr CLOSE_SQR_BRACKET
							;

method_call:			    method_name OPEN_PARENTHESES parameterList CLOSE_PARENTHESES 			
						    |CALLOUT OPEN_PARENTHESES STRING_LITERAL  callout_arg CLOSE_PARENTHESES
							;
							
method_name:                IDENTIFIER     
							;

parameterList:              /*epsilon*/                                 
                            | expr parameter 
							;

parameter:			    	/*epsilon*/ 							
					    	|COMMA expr parameter 
							;

literal:                    int_literal 								
						    |CHAR_LITERAL 								
						    |BOOL_LITERAL
							;

int_literal:				DECIMAL_LITERAL 							
						    |HEX_LITERAL	
							;

arith_expr:					expr MULTIPLY expr 								
							|expr DIVIDE expr 								
							|expr MOD expr 								
							|expr PLUS expr 								
							|expr MINUS expr
							|'-' expr %prec UMINUS			
							;

rel_expr:					expr LESS expr 								
							|expr GREATER expr 							
							|expr LESS_EQUAL expr 						
							|expr GREATER_EQUAL expr 
							;

equal_expr:					expr EQUAL_EQUAL expr 						
							|expr NOT_EQUAL expr 	
							;

condition_expr:				expr AND expr 								
							|expr OR expr 			
							;

callout_arg:			    /*epsilon*/ 								
						    |callout_arg COMMA expr        				
						    |callout_arg COMMA STRING_LITERAL 
							;

%%


int yyerror(string s)
{
  extern int yylineno;
  extern char *yytext;
  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << yylineno << endl;
  cerr << "Syntax error\n";
  exit(1);
}

int yyerror(char *s)
{
  return yyerror(string(s));
}
							


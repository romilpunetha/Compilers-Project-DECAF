#include<stdio.h>
#define YY_NO_UNPUT
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int yyparse(); // declaring yyparse() function which is dcreated by bison.

int main(int argc, char **argv){
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL)){ // reading input file passed as argument
    cerr << argv[0] << ": File " << argv[1] << " cannot be opened.\n";
    return 1;
  }
	freopen("flex_output.txt","w",stdout); // creating output file for flex
	freopen(NULL,"w",stdout);
	int a =yyparse(); //getting status of parser. if 0 report error
    if(!a) fprintf(stderr,"Lexical Analysis - Success\n");
   	else fprintf(stderr,"Lexical Analysis - Error\n");
	cerr << "Parsing - Success\n";
  return 0;
}


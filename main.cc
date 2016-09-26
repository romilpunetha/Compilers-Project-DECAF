#include<stdio.h>
#define YY_NO_UNPUT
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int yyparse();

int main(int argc, char **argv){
  if ((argc > 1) && (freopen(argv[1], "r", stdin) == NULL)){
    cerr << argv[0] << ": File " << argv[1] << " cannot be opened.\n";
    return 1;
  }
  yyparse();
  cout << "Success\n";
  return 0;
}


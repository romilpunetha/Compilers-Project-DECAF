# Compilers-Project-DECAF

Built the DECAF parser as coursework for the Compilers course

The DECAF compiler project consists of 3 main files: decaf.l, decaf.y, main.cc.

To start with place the tokenisation rules in the decaf.l file and the syntax rules in decaf.y file. The main.cc file is used to call the yyparse() funtion and begin the parsing of the given input file which is passed as an argument to the executable file.

To run the project (till phase 2) do the following.

1. Place all the 3 files in one folder and run the make command. The make file is configured to run on windows. Necessary changes must be made for linux. It requires the Visual Studion command terminal to run the make command. Windows terminal doesn't support it.

2. The make command will generate all the necessary dependencies by invoking the flex and bison tools, compiling the intermediate files along with the necessary dependencies, then creating an a.out executable.

3. Pass the input test file as an argument to a.out. 

eg. (on VS command terminal)
    nmake 
    a.out test_input.txt

it shall create a lex_output.txt which will have an entry for every token encountered, as well as a bison_output.txt which will have an entry corresponding to all the rules that matched with the source program.


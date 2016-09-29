# Makefile

OBJS	= bison.o lex.o main.o

CC	= g++
CFLAGS	= -g -Wall -ansi -pedantic -fpermissive

calc:		$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o a.out 

lex.o:		lex.c
		$(CC) $(CFLAGS) -c lex.c -o lex.o

lex.c:		decaf.l
		flex decaf.l
		xcopy lex.yy.c lex.c

bison.o:	bison.c
		$(CC) $(CFLAGS) -c bison.c -o bison.o

bison.c:	decaf.y
		bison -d -v decaf.y
		xcopy decaf.tab.c bison.c
		cmp -ps decaf.tab.h decaf.h || xcopy decaf.tab.h decaf.h

main.o:		main.cc
		$(CC) $(CFLAGS) -c main.cc -o main.o 

lex.o yac.o main.o	: 
lex.o main.o		: decaf.h

clean:
	del  *.o *.c *.h *.output



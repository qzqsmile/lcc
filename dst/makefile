CC=cc


main: main.o alloc.o string.o error.o input.o lex.o output.o types.o sym.o

main.o: main.c; $(CC) -c  -o $@ main.c
alloc.o: alloc.c; $(CC) -c -o $@ alloc.c
string.o: string.c; $(CC) -c -o $@ string.c
error.o: error.c; $(CC) -c -o $@ error.c
input.o: input.c; $(CC) -c -o $@ input.c
lex.o: lex.c; $(CC) -c -o $@ lex.c
output.o: output.c; $(CC) -c -o $@ output.c
types.o: types.c; $(CC) -c -o $@ types.c
sym.o: sym.c; $(CC) -c -o $@ sym.c

clean:
	rm -f *.o
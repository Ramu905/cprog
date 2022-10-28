output: hello.o size.o static.c
       gcc hello.o size.o static.c -o output

hello.o: hello.c
	 gcc -c hello.c

size.o: size.c
    gcc -c size.c

static.o: static.c
	gcc -c static.c

	clean:
	rm *.o output
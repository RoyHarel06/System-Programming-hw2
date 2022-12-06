CC=gcc

all: connections

connections: main.c my_mat.o
	$(CC) -Wall -g -o connections main.c my_mat.o

my_mat.o: my_mat.c my_mat.h 
	$(CC) -c my_mat.c
	
valgrind:
	valgrind --leak-check=full ./connections
	
.PHONY: clean valgrind
	
clean:
	rm -f *.o *.a *.so connections
CC=gcc

all: connections

connections: main.c my_mat.o
	$(CC) -Wall -o connections main.c my_mat.o

my_mat.o: my_mat.c my_mat.h 
	$(CC) -c my_mat.c
	
clean:
	rm -f *.o *.a *.so connections
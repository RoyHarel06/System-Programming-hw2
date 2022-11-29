CC=gcc

my_mat.o: my_mat.c my_mat.h 
	$(CC) -c my_mat.c

connections: main.c my_mat.o
	$(CC) -Wall -o connections main.c my_mat.o

all: connections
	
clean:
	rm -f *.o *.a *.so maindrec maindloop mains
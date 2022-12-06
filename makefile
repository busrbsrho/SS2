CC=gcc
FLAGS=-Wall -g


all: connectionsy

connectionsy : connections.o libmy_mat.a
	$(CC) $(FLAGS) main.c -L. libmy_mat.a -o main

connections.o: connections.c my_mat.h
	$(CC) $(FLAGS) -c connections.c 

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c 

libmy_mat.a: my_mat.o
	ar -rcs libmy_mat.a my_mat.o 

clean: 
	rm -f *.o *.a connectionsy








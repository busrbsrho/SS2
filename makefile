CC=gcc
FLAGS=-Wall -g


all:mat
mat:libmy_mat.a 

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c -lm

libmy_mat.a: my_mat.o main.o
	ar -rcs libmy_mat.a my_mat.o main.o

.PHONY: clean all

clean: rm -f *.o *.a mat




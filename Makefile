# Richard Fernando Heise Ferreira & Carlos Iago Bueno
# GRR20191053 & GRR20190171

CC = gcc
CFLAGS = -Wall

OBJECTS = main.o avl.o
BINARIES = myavl

all: $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BINARIES)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

avl.o: avl.c
	$(CC) $(CFLAGS) -c avl.c

clean:
	rm -rf *.o

purge: clean
	rm -rf $(BINARIES)

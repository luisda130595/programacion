all:
	gcc main.c perations.c -o operations.exe
	./perations.exe

main.o: main.c
	gcc -c main.c

operations.o: operations.c
	gcc -c operations.c

test: main.o operations.o
	gcc main.o perations.o -o perations.exe
	./maintest.tcl ./operations.exe
all: hw9.o
	gcc -o hw9 hw9.o

main.o: hw9.c
	gcc -c hw9.c


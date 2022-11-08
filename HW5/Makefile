output:file.o fileTest.o
	gcc -o output fileTest.o file.o

file.o:file.c fileTest.h
	gcc -c file.c poem.txt light

fileTest.o:fileTest.c fileTest.h
	gcc -c fileTest.c

main.static: main.c libhello.c
	gcc -c main.c libhello.c
	libtool -static -o libhello.a libhello.o
	gcc -o main.static main.o libhello.a

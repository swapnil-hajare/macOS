main.dynamic: main.c libhello.c
	gcc -c libhello.c main.c
	gcc -dynamiclib -o libhello.dylib -install_name libhello.dylib libhello.o
	gcc -o main.dynamic main.o -L. -lhello

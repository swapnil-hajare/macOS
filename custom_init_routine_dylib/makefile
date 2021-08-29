main.dynamic: main.c libhello.c
	gcc -c libhello.c main.c
	gcc -dynamiclib -o libhello.dylib -install_name libhello.dylib -init _my_start libhello.o
	gcc -o main.dynamic main.o -L. -lhello

clean:
	rm -f *.o
	rm -f libhello.dylib
	rm -f main.dynamic

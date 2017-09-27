all: main

main:rect.o main.o
	g++ rect.o main.o -o main

rect.o:rect.h rect.cc
	g++ -c rect.cc

main.o: main.cc
	g++ -c main.cc

clean: 
	rm *.o main

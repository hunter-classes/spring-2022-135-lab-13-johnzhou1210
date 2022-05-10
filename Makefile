main: main.o recursion.o
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o

main.o: main.cpp recursion.h

tests.o: tests.cpp recursion.h

recursion.o: recursion.cpp recursion.h

clean:
	rm -f main.o tests.o recursion.o
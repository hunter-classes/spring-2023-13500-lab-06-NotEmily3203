main: main.o caesar.o
	g++ -o main main.o caesar.o

tests: tests.o caesar.o
	g++ -o tests tests.o caesar.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

caesar: caesar.o
	g++ -o caesar caesar.o

caesar.o: caesar.cpp

test-ascii.o: test-ascii.cpp

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o
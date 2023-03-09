main: main.o caesar.o vigenere.o
	g++ -o main main.o caesar.o vigenere.o

tests: tests.o caesar.o vigenere.o
	g++ -o tests tests.o caesar.o vigenere.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

caesar: caesar.o
	g++ -o caesar caesar.o

vigenere: vigenere.o
	g++ -o vigenere vigenere.o

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

test-ascii.o: test-ascii.cpp

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main.o funcs.o tests.o
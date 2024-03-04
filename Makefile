all: a.out

a.out:
	g++ -std=c++11 testFile.cpp

test: a.out
	./a.out

clean:
	rm a.out

specific_test: a.out
	./a.out $(test)
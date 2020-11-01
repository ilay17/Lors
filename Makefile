creat :=  mkdir -p bin build/src
fold := mkdir -p build/test

all: bin/calculator

folder:
	$(creat)

bin/calculator: folder build/src/calc.o build/src/program.o
	g++ -std=c++11 build/src/calc.o build/src/program.o -o bin/calculator 

build/src/program.o: src/program.cpp
	g++ -std=c++11 -c src/program.cpp -o build/src/program.o

build/src/calc.o: src/calc.cpp
	g++ -std=c++11 -c src/calc.cpp -o build/src/calc.o

test: bin/test

folder_test:
	$(fold)

bin/test: folder_test build/test/test.o build/test/calc.o 
	g++ -std=c++11 build/test/calc.o build/test/test.o -o bin/test

build/test/test.o: test/test.cpp
	g++ -std=c++11 -c test/test.cpp -o build/test/test.o 

build/test/calc.o: src/calc.cpp
	g++ -std=c++11 -c src/calc.cpp -o build/test/calc.o

.PHONY: clean

clean:
	rm -rf build/src/*.o
	rm -rf bin/*
	rm -rf build/test/*.o

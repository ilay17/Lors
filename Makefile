creat :=  mkdir -p bin build/src

all: bin/calculator

folder:
	$(creat)

bin/calculator: folder build/src/calc.o build/src/program.o
	gcc build/src/calc.o build/src/program.o -o bin/calculator 

build/src/program.o: src/program.c
	gcc -c src/program.c -o build/src/program.o

build/src/calc.o: src/calc.c
	gcc -c src/calc.c -o build/src/calc.o

.PHONY: clean

clean:
	rm -rf build/src/*.o
	rm -rf bin/*
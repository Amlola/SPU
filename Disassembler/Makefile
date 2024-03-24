all: ass2

ass2: main.o Disassembler.o Hamlet.o
	g++  main.o Disassembler.o Hamlet.o -o ass2

main.o: main.cpp
	g++ -c main.cpp

assembler.o: Disassembler.cpp
	g++ -c  Disassembler.cpp

Hamlet.o: Hamlet.cpp
	g++ -c Hamlet.cpp

clean:
	rm *.o ass2.exe
all: ass

ass: main.o assembler.o Hamlet.o
	g++ -g main.o assembler.o Hamlet.o -o ass

main.o: main.cpp
	g++ -g -c main.cpp

assembler.o: assembler.cpp
	g++ -g -c  assembler.cpp

Hamlet.o: Hamlet.cpp
	g++ -g -c Hamlet.cpp

clean:
	rm *.o ass.exe
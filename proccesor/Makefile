all: proc

proc: main.o Stack_Func.o proccesor.o Hamlet.o
	g++ -g main.o Stack_Func.o proccesor.o Hamlet.o -o proc

stack.o: main.cpp
	g++ -g -DHASH -DCANARY -DDUMP -c main.cpp

Stack_Func.o: Stack_Func.cpp
	g++ -g -DHASH -DCANARY -DDUMP -c Stack_Func.cpp

proccesor.o: proccesor.cpp
	g++ -g -DHASH -DCANARY -DDUMP -c proccesor.cpp

Hamlet.o: Hamlet.cpp
	g++ -g -DHASH -DCANARY -DDUMP -c Hamlet.cpp

clean:
	rm *.o proc.exe
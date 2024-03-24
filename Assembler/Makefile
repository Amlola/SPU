all: ass

ass: main.o assembler.o Hamlet.o
	@g++ -g -o ass.exe obj/main.o obj/assembler.o obj/Hamlet.o

main.o: src/main.cpp
	@g++ -g -c src/main.cpp -o obj/main.o

assembler.o: src/assembler.cpp
	@g++ -g -c src/assembler.cpp -o obj/assembler.o

Hamlet.o: ../FileHandler/Hamlet.cpp
	@g++ -g -c ../FileHandler/Hamlet.cpp -o obj/Hamlet.o

clean:
	rm obj/* ass.exe
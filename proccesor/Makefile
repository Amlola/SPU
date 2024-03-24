STACK_FLAGS = -DCANARY -DHASH 
SANIT_FLAGS = -fsanitize=address,alignment,undefined

all: proc run

proc: main.o Stack_Func.o proccesor.o Hamlet.o
	@g++ -g  $(STACK_FLAGS) -o proc.exe obj/main.o obj/Stack_Func.o obj/proccesor.o obj/Hamlet.o

main.o: src/main.cpp
	@g++ -g  $(STACK_FLAGS) -c src/main.cpp -o obj/main.o

Stack_Func.o: ../Stack/Stack_Func.cpp
	@g++ -g  $(STACK_FLAGS) -c ../Stack/Stack_Func.cpp -o obj/Stack_Func.o

proccesor.o: src/proccesor.cpp
	@g++ -g  $(STACK_FLAGS) -c src/proccesor.cpp -o obj/proccesor.o

Hamlet.o: ../FileHandler/Hamlet.cpp
	@g++ -g  $(STACK_FLAGS) -c ../FileHandler/Hamlet.cpp -o obj/Hamlet.o

run: 
	@./proc.exe ../Assembler/output_file_bin.bin

clean:
	rm obj/* proc.exe
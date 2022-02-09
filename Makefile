CC_EXEC = g++
CC_FLAGS = -std=c++11
CC = $(CC_EXEC) $(CC_FLAGS)
Header_files = JsonBuilder.hpp Array.hpp Container.hpp Integer.hpp IntegerInArray.hpp JsonData.hpp Object.hpp String.hpp StringInArray.hpp InvalidIDError.hpp UndefinedTypeError.hpp
Object_files = main.o JsonBuilder.o Array.o Container.o Integer.o IntegerInArray.o JsonData.o Object.o String.o StringInArray.o InvalidIDError.o DuplicateKeyError.o UndefinedTypeError.o

all: 1.out

1.out: $(Object_files)
	$(CC) $(Object_files) -o 1.out

main.o: main.cpp JsonBuilder.hpp
	$(CC) -c main.cpp -o main.o

JsonBuilder.o: JsonBuilder.cpp $(Header_files)
	$(CC) -c JsonBuilder.cpp

JsonData.o: JsonData.cpp JsonData.hpp
	$(CC) -c JsonData.cpp

Container.o: Container.cpp Container.hpp JsonData.hpp DuplicateKeyError.hpp
	$(CC) -c Container.cpp

Array.o: Array.cpp Array.hpp Container.hpp
	$(CC) -c Array.cpp

Integer.o: Integer.cpp Integer.hpp JsonData.hpp
	$(CC) -c Integer.cpp

IntegerInArray.o: IntegerInArray.cpp IntegerInArray.hpp JsonData.hpp
	$(CC) -c IntegerInArray.cpp

Object.o: Object.cpp Object.hpp Container.hpp
	$(CC) -c Object.cpp

String.o: String.cpp String.hpp JsonData.hpp
	$(CC) -c String.cpp

StringInArray.o: StringInArray.cpp StringInArray.hpp JsonData.hpp
	$(CC) -c StringInArray.cpp

InvalidIDError.o: InvalidIDError.cpp InvalidIDError.hpp
	$(CC) -c InvalidIDError.cpp

DuplicateKeyError.o: DuplicateKeyError.cpp DuplicateKeyError.hpp
	$(CC) -c DuplicateKeyError.cpp

UndefinedTypeError.o: UndefinedTypeError.cpp UndefinedTypeError.hpp
	$(CC) -c UndefinedTypeError.cpp

.PHONY: cleans
clean:
	rm -r *.o
	rm 1.out	

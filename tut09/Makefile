CC=clang++
Cflags=-std=c++17 -Wall -Werror -Wpedantic -pthread -fsanitize=address -O2

all: make_unique

make_unique: make_unique.o
	$(CC) $(Cflags) make_unique.o -o make_unique

make_unique.o: make_unique.cpp
	$(CC) $(Cflags) -c make_unique.cpp


clean:
	rm *.o make_unique

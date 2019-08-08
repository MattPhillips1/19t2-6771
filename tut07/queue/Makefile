CC=clang++
Cflags=-std=c++17 -Wall -Werror -Wpedantic -pthread -fsanitize=address -O2

all: queue_test

queue_test: queue_test.o
	$(CC) $(Cflags) queue_test.o -o queue_test

queue_test.o: queue_test.cpp
	$(CC) $(Cflags) -c queue_test.cpp


clean:
	rm *.o queue_test

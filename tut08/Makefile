CC=clang++
Cflags=-std=c++17 -Wall -Werror -Wpedantic -pthread -fsanitize=address -O2

all: rope_user

rope_user: rope_user.o rope.o
	$(CC) $(Cflags) rope_user.o rope.o -o rope_user

rope_user.o: rope_user.cpp
	$(CC) $(Cflags) -c rope_user.cpp

rope.o: rope.cpp
	$(CC) $(Cflags) -c rope.cpp
clean:
	rm *.o rope_user

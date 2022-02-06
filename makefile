#pragma once

CC = g++
FLAGS = -Wall -pedantic-errors

bunko: bunko.o player.o
	$(CC) $(FLAGS) -o bunko bunko.o player.o

bunko.o: bunko.cpp player.h player.cpp
	$(CC) $(FLAGS) -c bunko.cpp

player.o: player.cpp player.h
	$(CC) $(FLAGS) -c player.cpp

run:compile
	./bunko

clean:
	rm -f *.o *.gch bunko

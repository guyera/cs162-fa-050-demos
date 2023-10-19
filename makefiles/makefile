EXE = run_baseball
CC = g++
CFLAGS = -Wall -g -c

$(EXE): main.o baseball_player.o
	$(CC) main.o baseball_player.o -o $(EXE)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

baseball_player.o: baseball_player.cpp
	$(CC) $(CFLAGS) baseball_player.cpp

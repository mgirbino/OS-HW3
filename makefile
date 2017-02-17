#Michael Girbino
#EECS 338 HW2: Processes
CC = gcc
CFLAGS = -std=c11 -ggdb
OUT = processes.o
SRC = processes.c

all:	processes

processes:
	$(CC) -o $(OUT) $(SRC) $(CFLAGS)  
	chmod 755 $(OUT)

clean:
	rm -f $(OUT)

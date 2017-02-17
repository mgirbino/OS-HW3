#Michael Girbino
#EECS 338 HW3: Pipes
CC = gcc
CFLAGS = -std=c11 -ggdb
OUT = pipes.o
SRC = pipes.c

all:	pipes

pipes:
	$(CC) -o $(OUT) $(SRC) $(CFLAGS)  
	chmod 755 $(OUT)

clean:
	rm -f $(OUT)

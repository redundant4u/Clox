CC=gcc
CFLAGS=-Wall -Wextra -Iinclude
SRC=$(wildcard src/*.c)

build:
	$(CC) $(CFLAGS) -o main $(SRC)

clean:
	rm main

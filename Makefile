CC = CC
CFLAGS = -Wall -Wextra -Werror

all: main

main: main.o
	$(CC) $(CFLAGS) -o main main.o


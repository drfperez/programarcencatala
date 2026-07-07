CC = gcc
CFLAGS = -Wall -Wextra -std=c11

exemple: exemples/hola.c stdlibcat.h
	$(CC) $(CFLAGS) -o hola exemples/hola.c

clean:
	rm -f hola

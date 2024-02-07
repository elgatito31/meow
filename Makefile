CC = gcc
CFLAGS = -Wall -Wextra

all: elgaton

elgaton: elgaton.c
	$(CC) $(CFLAGS) -o elgaton elgaton.c

clean:
	rm -f elgaton

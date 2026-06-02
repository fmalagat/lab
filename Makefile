CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: arbol3

testLine: turtlec.c programas/arbol3.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c programas/arbol3.c -o arbol3 $(LDLIBS)

clean:
	rm -f arbol3

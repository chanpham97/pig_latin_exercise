CC = gcc

CFLAGS = -g -Wall
LDFLAGS = -g

pig_latin:

.PHONY: clean
clean:
	rm -rg *.o a.out pig_latin

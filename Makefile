CC = gcc

CFLAGS = -g -Wall
LDFLAGS = -g

pig_latin: pig_latin.o convert.o

pig_latin.o: convert.h

convert.o: convert.h

.PHONY: clean
clean:
	rm -rf *.o a.out pig_latin

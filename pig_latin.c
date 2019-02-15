#include <stdio.h>
#include "convert.h"

int main(int argc, char **argv) {
	char *pig_phrase[/* fill in number of elements */];
	
	while(/* fill in this loop */) {
		char *word = /* fill in word */;
		pig_phrase[/* fill in index */] = convert(word);
	}	

	char **pig_phrase_iter = pig_phrase;
	while (/* */) {
		printf("%s ", *pig_phrase_iter);
	}

	printf("\n");
}


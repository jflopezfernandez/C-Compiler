
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void ReadSourceFile(const char *filename) {
	int input = 0;

	FILE *sourceFile = fopen(filename, "r");

	while ((input = fgetc(sourceFile)) != EOF) {
		printf("%c", input);
	}

	fclose(filename);
}

void ReadSourceFiles(const char *files[]) {
	for (int i = 0; i < 10; i++) {
		ReadSourceFile(files[i]);
	}
}


int main(void)
{
	//

	return EXIT_SUCCESS;
}

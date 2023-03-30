#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen("hello.txt", "r");

	if (fp == NULL) {
		printf("File not found\n");
		return 0;
	}

	int c;
	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);

	fclose(fp);

	return 0;
}

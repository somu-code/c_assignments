#include <stdio.h>

int main(void)
{
	char str[] = "Hello";
	int count = 0;
	char *p = str;
	while (*p != '\0') {
		count++;
		p++;
	}
	printf("Length of string is: %d\n", count);
	return 0;
}

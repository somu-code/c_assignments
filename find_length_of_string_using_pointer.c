#include <stdio.h>

void main(void)
{
	char str[1000];
	printf("Enter a stirng: ");
	scanf("%s", str);
	int count = 0;
	char *p = str;
	while (*p != '\0') {
		count++;
		p++;
	}
	printf("Length of string is: %d\n", count);
}

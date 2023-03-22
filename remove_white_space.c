#include <stdio.h>
#include <string.h>

void main(void)
{
	char str[1000];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	int i,j;

	for (i = 0, j = 0; i < strlen(str); i++) {
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
			str[j++] = str[i];
		}
	}

	str[j] = '\0';

	printf("Reslut: %s\n", str);
}

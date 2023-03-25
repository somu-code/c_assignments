#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *s = malloc(sizeof(char) * 100);
	printf("Enter a string: ");
	scanf("%[^\n]", s);
	int start = 0, end = strlen(s) - 1;
	while (start < end) {
		char temp = s[end];
		s[end] = s[start];
		s[start] = temp;
		start++;
		end--;
	}
	printf("%s\n", s);

	 return 0;
}

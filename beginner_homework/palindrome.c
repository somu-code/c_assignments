#include <stdio.h>
#include <string.h>

void main(void)
{
	char str[] = "eye";
	int l = 0;
	int h = strlen(str) - 1;
	while (h > l) {
		if (str[l++] != str[h--]) {
			printf("%s is not a palindrome\n", str);
		}
	}
	printf("%s is a palindrome\n", str);
}

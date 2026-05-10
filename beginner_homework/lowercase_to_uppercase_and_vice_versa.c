#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[] = "HelloWorld";

	int i;
	for (i = 0; i < strlen(arr); i++) {
		char ch = arr[i];
		if (65 <= ch <= 90) {
			arr[i] = (ch - 65) + 97;
		}
		
		if (97 <= ch <= 122) {
			arr[i] = (ch - 97) + 65;
		}
	}
	printf("%s\n", arr);
	
	return 0;
}

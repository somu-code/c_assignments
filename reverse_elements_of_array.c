#include <stdio.h>

int main(void)
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int reverse[10] = {0};
	int i,j;
	for (i = 9, j = 0; i >= 0; i--, j++) {
		reverse[j] = arr[i];
		printf("%d ", reverse[j]);
	}
	printf("\n");
	return 0;
}

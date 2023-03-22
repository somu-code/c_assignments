#include <stdio.h>

void main(void)
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {9,8,7,6,5};

	int (*ptr1)[5] = &arr1;
	int (*ptr2)[5] = &arr2;

	for (int i = 0; i < 5; i++) {
		printf("%d ", (*ptr1)[i] + (*ptr2)[i]);
	}
	printf("\n");
}

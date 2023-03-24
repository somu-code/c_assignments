#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int state = 0;
	int size, i;
	printf("Enter the size of array: ");
	scanf("%d", &size);

	int *arr = (int *)malloc(sizeof(int) * size);
	if (arr == NULL) {
		printf("Failed to accocate memory. Exiting...\n");
		return 1;
	}

	printf("Enter %d number of elements: \n", size);
	for (i = 0; i < size; i++) {
		scanf("%d", arr + i);
	}

	for (i = 0; i < (size - 1); i++) {
		if (arr[i] < arr[++i]) {
			state = 1;
		}
		else state = 0;
	}

	if (state == 1) {
		printf("Arrays is in ascending order\n");
	}
	else {
		printf("Array is not in ascending order\n");
	}
	
	return 0;
}

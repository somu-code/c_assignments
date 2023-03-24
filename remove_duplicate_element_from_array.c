#include <stdio.h>

int main(void)
{
	int n, count = 0, i, j;
	printf("Enter number of elements in the array: ");
	scanf("%d", &n);
	int arr[n], temp[n];
	if (n == 0) {
		printf("No elemnet inside the array.");
		return 0;
	}
	printf("Enter elements in the array integers only: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < count; j++) {
			if (arr[i] == temp[j])
				break;
		}
		if (j == count) {
			temp[count] = arr[i];
			count++;
		}
	}

	printf("Array after removeing duplicates: ");
	for (int i = 0; i < count; i++) {
		printf("%d", temp[i]);
	}
	printf("\n");

	return 0;
}

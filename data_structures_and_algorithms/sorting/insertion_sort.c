#include <stdio.h>

void insertion_sort(int arr[], int len)
{
	int i,j, current;
	for (i = 1; i < len; i++) {
		current = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > current) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

int main(void)
{
	int nums[10] = {10,8,9,7,4,1,2,3,5,6};
	int arr_len = sizeof(nums) / sizeof(int);
	
	insertion_sort(nums, arr_len);
	printf("Sorted array: \n");

	int i = 0;
	for (i = 0; i < arr_len; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	return 0;
}

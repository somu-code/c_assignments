#include <stdio.h>

void main(void)
{
	int n, i;
	printf("Enter length of array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter element of array that is int's only: \n");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int *p_arr;
	p_arr = arr;
	int max, min;
	max = p_arr[0];
	min = p_arr[0];
	for (i = 0; i < n; i++) {
		if (max < p_arr[i]) max = p_arr[i];
		if (min > p_arr[i]) min = p_arr[i];
	}
	printf("Max num is: %d\n", max);
	printf("Min num is: %d\n", min);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int matrix1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int matrix2[3][3] = {
		{10,11,12},
		{13,14,15},
		{16,17,18}
	};

	int **matrix_sum = (int **)malloc(3 * sizeof(int));

	int i,j;

	for (i = 0; i < 3; i++) {
		int *row = (int *)malloc(3 * sizeof(int));
		*(matrix_sum + i) = row;
		for (j = 0; j < 3; j++) {
			*(*(matrix_sum + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *(*(matrix_sum + i) + j));
		}
		printf("\n");
		free(*(matrix_sum + i));
	}

	return 0;
}

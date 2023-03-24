#include <stdio.h>

int main(void)
{
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int i,j;

	int (*pointer)[3];
	pointer = matrix;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", pointer[j][i]);
		}
		printf("\n");
	}

	return 0;
}

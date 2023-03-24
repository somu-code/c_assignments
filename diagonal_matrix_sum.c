#include <stdio.h>

int main(void)
{
	int matrix[4][4] = {
		{1,2,3,1},
		{4,5,6,2},
		{7,8,9,3},
		{1,2,3,4}
	};

	int sum = 0, i, j;

	for (i = 0, j = 3; i < 4; i++, j--)
		sum += matrix[i][j];
	printf("Diagonal sum of matrix is: %d\n", sum);
	
	return 0;
}

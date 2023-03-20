#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int *p = &a;
	int *q = &b;
	int sum = *p + *q;
	printf("Sum of pointer %d and %d is %d\n", p, q, sum);
	return 0;
}

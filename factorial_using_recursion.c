#include <stdio.h>

unsigned long long factorial(int n)
{
	if(n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

void main(void)
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Factorial: %llu\n", factorial(n));
}

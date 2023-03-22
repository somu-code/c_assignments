#include <stdio.h>

unsigned long long sum(int n)
{
	if (n == 0) {
		return n;
	}
	return n + sum(n-1);
}
void main(void)
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Sum of n digits is: %d\n", sum(n));
}

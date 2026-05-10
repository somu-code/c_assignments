#include <stdio.h>

int main(void)
{
	printf("Enter a year: ");
	int i;
	scanf("%d", &i);
	if ((i % 400 == 0 || i % 100 != 0) && (i % 4 == 0)) {
		printf("The %d is a leap year (it has 366 days).\n", i);
	}
	else {
		printf("The %d is not a leap year(it has 365 days).\n", i);
	}

	return 0;
}

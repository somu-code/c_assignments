#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(100 * sizeof(char));
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    int count = 0;
    while(s[count] != '\0') {
	    count++;
    }
    printf("Length of given string: %d\n", count);
    free(s);

    return 0;
}

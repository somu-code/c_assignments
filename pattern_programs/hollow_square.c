#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0)
                printf("*");
            else if (i == 4)
                printf("*");
            else if (i > 0 && i < 4) {
                if (j == 0)
                    printf("*");
                else if (j > 0 && j < 4)
                    printf(" ");
                else if (j == 4)
                    printf("*");
            }
        }
        printf("\n");
    }
}

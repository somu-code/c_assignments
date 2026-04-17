#include <stdio.h>

int main(void) {
    int i = 1;
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k <= j; k++) {
            printf("%d ", i);
            i++;
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>

struct animal {
    char *name;
    int leg_count;
};

int compare(const void *a, const void *b) {
    struct animal *animal_a = (struct animal *)a;
    struct animal *animal_b = (struct animal *)b;
    return (animal_a->leg_count - animal_b->leg_count);
}

int main(void) {
    struct animal a[4] = {{.name = "Dog", .leg_count = 4},
                          {.name = "Monkey", .leg_count = 2},
                          {.name = "Antelope", .leg_count = 4},
                          {.name = "Snake", .leg_count = 0}};
    qsort(a, 4, sizeof(struct animal), compare);
    for (int i = 0; i < 4; i++) {
        printf("Animal name: %s, number of legs: %d\n", a[i].name,
               a[i].leg_count);
    }
}

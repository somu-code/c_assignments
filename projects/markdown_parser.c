#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc > 2) {
        printf("One markdown file at a time\n");
        return EXIT_SUCCESS;
    }
    if (argc == 1) {
        printf("I have to take inputs from stdin %s\n", argv[0]);
        return EXIT_SUCCESS;
    }
    if (argc == 2) {
        FILE *given_markdown_file = fopen(argv[1], "r");
        if (given_markdown_file == NULL) {
            perror("FILE pointer is NULL");
        }
    }
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc > 2) {
        printf("One markdown file at a time\n");
        return EXIT_FAILURE;
    }
    FILE *markdown_input = NULL;
    if (argc == 1) {
        markdown_input = stdin;
    }
    if (argc == 2) {
        markdown_input = fopen(argv[1], "r");
        if (markdown_input == NULL) {
            perror("FILE pointer is NULL");
            return EXIT_FAILURE;
        }
        fclose(markdown_input);
    }
    return EXIT_SUCCESS;
}

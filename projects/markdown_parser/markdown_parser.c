#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    }
    size_t line_buffer_size = 1024;
    char *line_buffer = malloc(line_buffer_size);
    if (line_buffer == NULL) {
        perror("malloc failed");
        if (argc == 2) {
            fclose(markdown_input);
        }
        return EXIT_FAILURE;
    }
    bool in_code_block = false;
    bool in_unordered_list = false;
    while (fgets(line_buffer, line_buffer_size, markdown_input) != NULL) {
        if (line_buffer[0] == '#' && !in_code_block) {
            size_t number_of_headings = 0;
            for (int i = 0; i < 6; i++) {
                if (line_buffer[i] == '#') {
                    number_of_headings++;
                } else {
                    break;
                }
            }
            char *p = strchr(line_buffer, '\n');
            if (p != NULL) {
                *p = '\0';
            }
            printf("<h%zu>%s</h%zu>\n", number_of_headings,
                   &line_buffer[number_of_headings + 1], number_of_headings);
        } else if (line_buffer[0] == '-') {
            char *p = strchr(line_buffer, '\n');
            if (p != NULL) {
                *p = '\0';
            }
            printf("<li>%s</li>\n", &line_buffer[2]);
        } else if (!in_code_block && line_buffer[0] == '`' &&
                   line_buffer[1] == '`' && line_buffer[2] == '`') {
            in_code_block = true;
            printf("<pre><code>\n");
        } else if (in_code_block && line_buffer[0] == '`' &&
                   line_buffer[1] == '`' && line_buffer[2] == '`') {
            in_code_block = false;
            printf("</code></pre>\n");
        } else if (in_code_block) {
            printf("%s", line_buffer);
        }
    }
    free(line_buffer);
    if (argc == 2) {
        fclose(markdown_input);
    }
    return EXIT_SUCCESS;
}

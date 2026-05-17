#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
./mdparser                             # stdin → stdout
./mdparser input.md                    # file → stdout
./mdparser -o                          # stdin → auto generated filename
./mdparser -o output.html              # stdin → named file
./mdparser -o input.md                 # file → auto generated filename
./mdparser -o output.html input.md     # file → named file
*/

int main(int argc, char **argv) {
    const char *HTML_HEADER =
        "<!DOCTYPE html>\n"
        "<html lang=\"en\">\n"
        "<head>\n"
        "<meta charset=\"UTF-8\">\n"
        "<meta name=\"viewport\" content=\"width=device-width, "
        "initial-scale=1.0\">\n"
        "<meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">\n"
        "<title>Markdown parser</title>\n";
    const char *HTML_FOOTER =
        "</head>\n"
        "<body>\n";
    FILE *markdown_input = NULL;
    FILE *output_html = NULL;
    if (argc == 1) {
        // ./a.out  stdin -> stdout
        markdown_input = stdin;
        output_html = stdout;
    } else if (argc == 2) {
        if (strrchr(argv[1], '.') != NULL &&
            strcmp(strrchr(argv[1], '.'), ".md") == 0) {
            // ./a.out example.md   file -> stdout
            markdown_input = fopen(argv[1], "r");
            if (markdown_input == NULL) {
                perror("Error reading file");
                return EXIT_FAILURE;
            }
            output_html = stdout;
        } else if (argv[1][0] == '-' && argv[1][1] == 'o') {
            // ./a.out -o   stdin -> auto generated filename
            markdown_input = stdin;
            output_html = fopen("output.html", "w");
            if (output_html == NULL) {
                perror("Error writing to file");
                return EXIT_FAILURE;
            }
        }
    } else if (argc == 3) {
        if (argv[1][0] == '-' && argv[1][1] == 'o' &&
            strrchr(argv[2], '.') != NULL &&
            strcmp(strrchr(argv[2], '.'), ".html") == 0) {
            // ./a.out -o example.html   stdin -> named file
            markdown_input = stdin;
            output_html = fopen(argv[2], "w");
            if (output_html == NULL) {
                perror("Error writing to file");
                return EXIT_FAILURE;
            }
        } else if (argv[1][0] == '-' && argv[1][1] == 'o' &&
                   strrchr(argv[2], '.') != NULL &&
                   strcmp(strrchr(argv[2], '.'), ".md") == 0) {
            // ./a.out -o example.md    file -> auto generated filename
            markdown_input = fopen(argv[2], "r");
            if (markdown_input == NULL) {
                perror("Error reading file");
                return EXIT_FAILURE;
            }
            output_html = fopen("output.html", "w");
            if (output_html == NULL) {
                perror("Error writing to file");
                return EXIT_FAILURE;
            }
        }
    } else if (argc == 4 && argv[1][0] == '-' && argv[1][1] == 'o' &&
               strrchr(argv[2], '.') != NULL &&
               strcmp(strrchr(argv[2], '.'), ".html") == 0 &&
               strrchr(argv[3], '.') != NULL &&
               strcmp(strrchr(argv[3], '.'), ".md") == 0) {
        // ./a.out -o output.html example.md
        markdown_input = fopen(argv[3], "r");
        if (markdown_input == NULL) {
            perror("Error reading file");
            return EXIT_FAILURE;
        }
        output_html = fopen(argv[2], "w");
        if (output_html == NULL) {
            perror("Error writing to file");
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
    fprintf(output_html, "%s", HTML_HEADER);
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
            fprintf(output_html, "<h%zu>%s</h%zu>\n", number_of_headings,
                    &line_buffer[number_of_headings + 1], number_of_headings);
        } else if (!in_unordered_list && line_buffer[0] == '-' &&
                   line_buffer[1] != '-') {
            in_unordered_list = true;
            fprintf(output_html, "<ul>\n");
            char *p = strchr(line_buffer, '\n');
            if (p != NULL) {
                *p = '\0';
            }
            fprintf(output_html, "<li>%s</li>\n", &line_buffer[2]);
        } else if (in_unordered_list && line_buffer[0] == '-' &&
                   line_buffer[1] != '-') {
            char *p = strchr(line_buffer, '\n');
            if (p != NULL) {
                *p = '\0';
            }
            fprintf(output_html, "<li>%s</li>\n", &line_buffer[2]);
        } else if (in_unordered_list) {
            in_unordered_list = false;
            fprintf(output_html, "</ul>\n");
        } else if (!in_code_block && line_buffer[0] == '`' &&
                   line_buffer[1] == '`' && line_buffer[2] == '`') {
            in_code_block = true;
            fprintf(output_html, "<pre><code>\n");
        } else if (in_code_block && line_buffer[0] == '`' &&
                   line_buffer[1] == '`' && line_buffer[2] == '`') {
            in_code_block = false;
            fprintf(output_html, "</code></pre>\n");
        } else if (in_code_block) {
            fprintf(output_html, "%s", line_buffer);
        }
    }
    fprintf(output_html, "%s", HTML_FOOTER);
    free(line_buffer);
    return EXIT_SUCCESS;
}

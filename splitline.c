#include "shell.h"
#include "stdio.h"

#define MAX_ARGS 64
#define ARG_DELIMITER " \t\n\r"

/**
 * split_line - Split a line into tokens
 * @line: Line to be split
 *
 * Return: Array of tokens (arguments)
 */
char **split_line(char *line)
{
    int i = 0;
    char *token = strtok(line, ARG_DELIMITER);
    char **tokens = malloc(MAX_ARGS * sizeof(char *));
    if (tokens == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    while (token != NULL) {
        tokens[i] = strdup(token);
        i++;
        token = strtok(NULL, ARG_DELIMITER);
    }
    tokens[i] = NULL;

    return tokens;
}


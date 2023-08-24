#include "shell.h"

#define MAX_LINE_LENGTH 1024

/**
 * read_line - Read a line of input from stdin
 *
 * Return: Pointer to the read line
 */
char *read_line(void)
{
	char *line = malloc(MAX_LINE_LENGTH * sizeof(char));

	if (line == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	if (fgets(line, MAX_LINE_LENGTH, stdin) == NULL)
	{
		free(line);
		return (NULL);
	}

	return (line);
}


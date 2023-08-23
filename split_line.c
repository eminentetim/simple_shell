#include "simple_shell.h"

/**
 *  * split_line - split a string into multiple strings
 * @line: string to be splited
 *
 * Return: pointer that points to the new array
 */
char **split_line(char *line)
{
	int biufsize = 64;
	int a = 0;
	char **to = malloc(biufsize * sizeof(char *));
	char *ten;

	if (!to)
	{
		fprintf(stderr, "allocation error in split_line: to\n");
		exit(EXIT_FAILURE);
	}
	ten = strtok(line, TOK_DELIM);
	while (ten != NULL)
	{
		if (ten[0] == '#')
		{
			break;
		}
		to[a] = ten;
		a++;
		if (a >= biufsize)
		{
			biufsize += biufsize;
			to = realloc(to, biufsize * sizeof(char *));
			if (!to)
			{
				fprintf(stderr, "reallocation error in split_line: to");
				exit(EXIT_FAILURE);
			}
		}
		ten = strtok(NULL, TOK_DELIM);
	}
	to[a] = NULL;
	return (to);
}

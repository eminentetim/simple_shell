#include "shell.h"

/**
 * free_args - Free memory allocated for arguments
 * @args: Array of command arguments
 *
 * Return: void
 */
void free_args(char **args)
{
	int i = 0;

	while (args[i] != NULL)
	{
		free(args[i]);
		i++;
	}
	free(args);
}

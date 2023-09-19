#include "simple.h"

/**
 * env - functions that prints enviroment variables
 * @args: arguments for the variables
 *
 * Return: 1 on success, 0 if not
 */

int env(char **args)
{
	int j = 0;

	(void)(**args);
	while (environ[j])
	{
		write(STDOUT_FILENO, environ[j], strlen(environ[j]));
		write(STDOUT_FILENO, "\n", 1);
		j++;
	}
	return (-1);
}

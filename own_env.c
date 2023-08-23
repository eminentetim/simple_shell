#include "simple_shell.h"

/**
 * own_env - function that prints enviroment variables
 * @args: arguments
 *
 * Return: 1 on success, and 0 if not
 */
int own_env(char **args)
{
	int j = 0;
	(void)(**args);

	while (environ[j])
	{
		write(STDOUT_FILENO, environ[j], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		j++;
	}
	return (-1);
}

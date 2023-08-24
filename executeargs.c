#include "shell.h"

/**
 * execute_args - Execute a command and its arguments
 * @args: Array of command arguments
 *
 * Return: 0 on success, -1 on error
 */
int execute_args(char **args)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		return (-1);
	}
	else if (child_pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("execvp");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(NULL);
	}

	return (0);
}


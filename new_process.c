#include "simple_shell.h"

/**
 * new_process - create a new process
 * @args: array of strings that contains the command and its flags
 *
 * Return: 1 if success, 0 otherwise.
 */
int new_process(char **args)
{
	pid_t pid;
	int sta;

	pid = fork();
	if (pid ==  0)
	{
		/* child process */
		if (execvp(args[0], args) == -1)
		{
			perror("error in new_process: child process");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("error in new_process: forking");
		/* error forking */
	}
	else
	{
		/* checking parent process */
		do {
			waitpid(pid, &sta, WUNTRACED);
		} while (!WIFEXITED(sta) && !WIFSIGNALED(sta));
	}
	return (-1);
}

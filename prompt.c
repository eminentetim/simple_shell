#include "simple.h"
/**
 * shell_interactive - unix like shell terminal
 * Return: 0 on success
 **/

void shell_interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	do {
		printf("Eminent_shell$: ");
		line = read_line();
		args = split_line(line);
		status = execute_args(args);

		free(line);
		free_args(args);
	/* Exit with status*/
		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}

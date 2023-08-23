#include "simple_shell.h"

/**
 * shell_no_interactive - simple linux command line interpreter
 *
 * Return: void
 */
void shell_no_interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	do {
		line = read_stream();
		/* tokenize line */
		args = split_line(line);
		status = execute_args(args);
		/* avoid memory leaks */
		free(line);
		free(args);
		/* exit with status */
		if (status >= 0)
		{
			exit(status);
		}
	} while (status == -1);
}

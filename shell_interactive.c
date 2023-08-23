#include "simple_shell.h"

/**
 * shell_interactive - simple linux command line interpreter
 *
 * Return: void
 */

void shell_interactive(void)
{
	char *line;
	char **args;
	int status = -1;

	do {
		 /* print prompt symbol */
		printf("prompt$ ");
		/* read line from stdin */
		line = read_line();
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

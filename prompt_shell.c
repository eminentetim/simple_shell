#include "simple_shell.h"

/**
 * shell_promte - UNIX command line interpreter
 *
 * Return: void
 */
void shell_promte(void)
{
	char *line;
	char **args;
	int time = -1;

	do {
		printf("simple_prompt$ "); /* print prompt symbol */
		line = read_line(); /* read line from stdin */
		args = split_line(line); /* tokenize line */
		time = execute_args(args);
		/* avoid memory leaks */
		free(line);
		free(args);
		/* exit with status */
		if (time >= 0)
		{
			exit(time);
		}
	}
	while
	{
		(time == -1);
	}
}

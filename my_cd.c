#include "simple.h"

/**
 * cd - changing the working directory of the current
 * shell executon environment
 * @args: directory to change
 *
 * Return: 1 one success, 0 otherwise.
 */
int cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "expected arguments to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("error in cd.c: changing directory\n");
		}
	}
	return (-1);
}
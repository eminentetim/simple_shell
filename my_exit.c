#include "simple.h"

/**
 * myget_exit - causes normal process to end
 * @args: empty args
 *
 * Return: 0 to end the process
 */

int myget_exit(char **args)
{
	/* exiting state */
	if (args[1])
	{
		return (atoi(args[1]));
	}

	/* exit success */
	else
	{
		return (0);
	}
}

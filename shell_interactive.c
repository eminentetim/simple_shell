#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
/**
 * shell_interactive - linux interpreter.
 * free - freee alocated space.
 **/
void shell_interactive(void)
{
	char *order;

	while (1)
	{
		printf("Eminent_prompt$: ");

		order = read_line();
		if (order == NULL)
		{
			printf("\n");
			break;
		}
		execute_command(order);
		free(order);
	}
}

#include "shell.h"

/**
 * execute_command -  to run command
 * Return: 0
 **/
void execute_command(const char *command)
{
	int return_code = system(command);

	if (return_code == 0)
	{
		printf("Command executed successfully.\n");
	}
	else
	{
		printf("Command failed with return code %d.\n", return_code);
	}
}

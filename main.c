#include "simple_shell.h"

/**
 * main - function that checks if our shell is called or notcalled
 *
 * Return: 0 on success or 1 if not
 */
int main(void)
{
	/* determining if file descriptor is associated with any terminal */
	if (isatty(STDIN_FILENO) == 1)
	{
		shell_interactive();
	}
	else
	{
		shell_no_interactive();
	}
	return (0);
}

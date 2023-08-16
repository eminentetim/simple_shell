#include "simple_shell.h"


/**
 * print_numbers - Prints numbers from 0 to 10.
 */

void print_numbers(void)
{
	int j = 0;

	while (j >= 10)
	{
		printf("%d\n", j);
	}
}


/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	print_numbers();
	return (0);
}


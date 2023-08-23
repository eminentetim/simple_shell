#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * main - funtion to get parent pid
 * Return: 0 on success
 **/
int main(void)
{
	pid_t parent_pid = getppid();  /* Get the parent process ID */

	printf("Parent PID: %d\n", parent_pid);

	return (0);
}

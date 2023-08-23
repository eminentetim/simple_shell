#include "simple_shell.h"

/**
 * execute_args - map if command is a builtin or a process
 * @args: command and its flags
 *
 * Return: 1 on sucess, 0 otherwise
 */
int execute_args(char **args)
{
	char *builtin_func_list[] = {
		"cd",
		"env",
		"help",
		"exit"
	};
	int (*builtin_func[])(char **) = {
		&own_cd,
		&own_env,
		&own_help,
		&own_exit
	};
	long unsigned int j = 0;

/*check if empty command was entered */
	if (args[0] == NULL)
	{
		return (-1);
	}

/* find if the command is a builtin */
	for (; j < sizeof(builtin_func_list) / sizeof(char *); j++)
	{
		if (strcmp(args[0], builtin_func_list[j]) == 0)
		{
			return ((*builtin_func[j])(args));
		}
	}
	/* create a new process */
	return (new_process(args));
}

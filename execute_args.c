#include "simple_shell.h"

/**
 * execute_args - it maps if command is a builtin or a process
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
	long unsigned int a = 0;

	if (args[0] == NULL)
	{
		return (-1);
	}
	for (; a < sizeof(builtin_func_list) / sizeof(char *); a++)
	{
		if (strcmp(args[0], builtin_func_list[a]) == 0)
		{
			return ((*builtin_func[a])(args));
		}
	}
	return (new_process(args));
}

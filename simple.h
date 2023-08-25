#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

#define TOK_DELIM " \t\r\n\a\""
extern char **environ;

void interactive(void);
void non_interactive(void);

char *readlf(void);
char **sptlf(char *line);
int get_execute(char **args);
char *get_stream(void);

int npid(char **args);
char *get_line(void);

int cd(char **args);
int get_exit(char **args);
int env(char **args);
int help(char **args);

#endif

#ifndef SIMPLE_H
#define SIMPLE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


// Function prototypes
char *read_line(void);
char **split_line(char *line);
int execute_args(char **args);
void free_args(char **args);

#endif


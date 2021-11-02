#include "shell.h"
char **tokenize(char *line, char *delim)
{
    char *token;
    int i = 0;
    char **token_v;

    if (line == NULL)
    {
        perror("malloc failed\n");
        exit(EXIT_FAILURE);
    }
    token_v = malloc(512);
    if (token_v == NULL)
    {
        perror("malloc failed\n");
        exit(EXIT_FAILURE);
    }
    token = strtok(line, delim);
    while (token)
    {
        token_v[i++] = token;
        token = strtok(NULL, delim);
    }
    token_v[i] = NULL;
    return (token_v);
}

#include "shell.h"

/**
 * main - the main function of the hsh project
 *
 * Return: 0 Always
 */
int main(void)
{
	char *buffer;
	char delim[] = " \n\t\a";
	ssize_t read;
	int status;
	size_t size = BUFFER_SIZE;
	char **av;
	pid_t pid;
	buffer = malloc(size);
	if(buffer == NULL)
	{
		error(1);
	}
	while(1){
			write(STDOUT_FILENO, "#cisfun$ ", 9);
			read = getline(&buffer,&size,stdin);
			if (read == -1)
		{
			write(STDERR_FILENO, "getline failed\n", 14);
			_exit(EXIT_FAILURE);
		}
			av = tokenize(buffer, delim);
			pid = fork();
	             if (pid == -1)
		{
			write(STDERR_FILENO, "fork failed\n", 12);
			_exit(EXIT_FAILURE);
		}

		if (pid == 0)
		{
			if (execve(av[0], av, NULL) == -1){
				write(STDERR_FILENO, "./shell: No such file or directory\n", 35);
			        _exit(EXIT_FAILURE);
				}
		}
		else
			wait(&status);
	}
		
	

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main - Returns child processes executed
 * @ac: Argument count
 * @av: Argument entry
 * Return: Return 0
 */
int main(int ac, char *av[])
{
	pid_t pids[5];
	int i;
	int n = 5;

	for (i = 0; i < n; i++)
	{
		if ((pids[i] = fork()) < 0)
		{
			perror("fork");
			abort();
		}
		else if (pids[i] == 0)
		{
			return (0);
		}
	}

	int status;
	pid_t pid;

	while (n > 0)
	{
		pid = wait(&status);
		printf("Child with PID %ld exited with status 0x%x.\n", (long)pid, status);
		--n;
	}

}

#include <stdio.h>

/**
 * main - print argument
 * @argv: argument value
 * @ac: argument  count
 * Return: Always 0
 */
int main(int ac, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

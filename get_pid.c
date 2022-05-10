#include <stdio.h>
#include <unistd.h>

/**
  * main - get pid
  * Return: Always 0(success)
  */
int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();

	printf("%u\n", my_ppid);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two number from commandline
* @argc: argument counter
* @argv: argument vector
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i, j;

		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%i\n", i * j);
	}
	return (0);
}

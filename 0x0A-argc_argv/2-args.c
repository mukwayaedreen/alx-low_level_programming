#include <stdio.h>

/**
* main - prints the arguments passed to it
* @argc: argument counter
* @argv: argument vetor
* Return: 0
*/

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n ", argv[a]);
	}

	return (0);
}

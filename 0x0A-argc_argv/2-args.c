#include <stdio.h>

/**
* main - prints the arguments passed to it
* @argc: argument counter
* @argv: argument vetor
* Return: 0
*/

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

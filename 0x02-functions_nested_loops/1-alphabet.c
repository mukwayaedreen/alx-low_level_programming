#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int j;
	
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');

	return (0);
}

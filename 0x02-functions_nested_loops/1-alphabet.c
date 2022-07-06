#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Nothing
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}

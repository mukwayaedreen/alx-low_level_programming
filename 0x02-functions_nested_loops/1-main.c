#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n);

	return (0);

}

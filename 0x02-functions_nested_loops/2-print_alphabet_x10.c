#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabets 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int ch;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

	}
}

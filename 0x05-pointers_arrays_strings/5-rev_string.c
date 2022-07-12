#include "main.h"

/**
* rev_string - fuction which reverses the entire string
* @s: string to be reversed
* Return: always 0
*/

void rev_string(char *s)
{
	if (*s)
	{
		reverse(s + 1);
		_putchar(*s);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
* rev_string - fuction which reverses the entire string
* @s: string to be reversed
* Return: always 0
*/

void rev_string(char *s)
{
	int a, b;

	a = strlen(s);

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

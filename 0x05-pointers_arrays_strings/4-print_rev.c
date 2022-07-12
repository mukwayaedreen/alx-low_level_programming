#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* print_rev - function which prints string in reverse
* @s: variable holding string to reverse
* Return: always 0
*/

void print_rev(char *s)
{

	int length, c;

	length = strlen(s);

	for (c = length - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

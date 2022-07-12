#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the last half of the string
* @str: string whose last characters are to be printed
* Return: always 0
*/

void puts_half(char *str)
{
	int a, n;

	n = strlen(str);
	a = n / 2;

	if (n % 2 == 0)
	{
		for (a; a < n; a++)
		{
			putchar(str[a]);
		}
	}
	else
	{
		n = (strlen(str) - 1) / 2;
		a = n / 2;
		for (a; a < n; a++)
		{
			putchar(str[a]);
		}
	}
	putchar('\n');
}

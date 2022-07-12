#include "main.h"

/**
* puts_half - prints the last half of the string
* @str: string whose last characters are to be printed
* Return: always 0
*/

void puts_half(char *str)
{
	int a = 0;
	int n;
	int isEven;

	while (str[len])
		len++;

	isEven = len % 2 == 0;
	n = (isEven ? len : len - 1) / 2;
	n += isEven ? 0 : 1;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

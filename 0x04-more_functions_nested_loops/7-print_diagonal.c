#include "main.h"

/**
* print_diagonal - prints diagonal
* @n: numbers of lines
* Return: Always 0
*/

void print_diagonal(int n)
{
	int x, i = 0;

	while (i < n && n > 0)
	{
		x = 0;

		while (x < i)
		{
			_putchar(' ');
			x++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

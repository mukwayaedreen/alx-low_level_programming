#include "main.h"

/**
* print_diagonal - prints diagonal
* @n: numbers of lines
* Return: Always 0
*/

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(' ');
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

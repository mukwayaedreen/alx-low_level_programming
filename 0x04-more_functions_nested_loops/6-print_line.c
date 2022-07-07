#include "main.h"

/**
* print_line - prints the line in between depending on size
* @n: the number of times the line will be printed
* Return: Always 0.
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_' + '\n');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');

	return (0);
}

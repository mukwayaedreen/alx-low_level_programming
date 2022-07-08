#include "main.h"

/**
* print_line - prints a line depending on the muber entered
* @n: number of times lines will be printrd
* Return: always 0
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
			_putchar('\n');
	}
}

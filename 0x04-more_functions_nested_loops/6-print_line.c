#include "main.h"

/**
* print_line - prints a line depending on the muber entered
* @n: number of times lines will be printrd
* Return: always 0
*/

void print_line(int n)
{
	int i = 0;

	while (i > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

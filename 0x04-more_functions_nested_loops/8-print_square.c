#include "main.h"

/**
* print_square - prints a square
* @size: length of the square
* Return: always 0
*/

void print_square(int size)
{
	int x, i = 0;

	while (i < size && size > 0)
	{
		x = 0;

		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}

#include "main.h"

/**
* print_square - prints the square of #
* @size: length of the square
* Return: Always 0.
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
	return (0);
}

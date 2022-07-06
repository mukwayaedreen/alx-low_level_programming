#include "main.h"

/**
* times_table - prints a multiplication table
* Return: Always 0 (success)
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j);
		}
	}
	return (0);
}


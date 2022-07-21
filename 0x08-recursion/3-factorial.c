#include "main.h"

/**
* factorial - finds factorial
* @n: number whose factorial is to be calculated
*
* Return: 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

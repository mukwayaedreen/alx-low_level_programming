#include "main.h"

/**
* _sqrt_recursion - finds the natural number root
* @n: integer
*
* Return: integer
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
* square - finds the square root
* @n: interger to finf the square
* @val: square root
* Return: interger
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

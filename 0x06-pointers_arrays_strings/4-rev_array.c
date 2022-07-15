#include "main.h"

/**
* reverse_array - reverses an array
* @a: pointer holding the array
* @n: array length
* Return: always 0
*/

void reverse_array(int *a, int n)
{
	int i, half;

	for (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}

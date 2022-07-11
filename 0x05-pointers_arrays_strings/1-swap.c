#include "main.h"

/**
* swap_int - function which swaps two numbers
* @a: pointer varible holding value1
* @b: pointer variable holding another value
* Return: always 0
*/

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}

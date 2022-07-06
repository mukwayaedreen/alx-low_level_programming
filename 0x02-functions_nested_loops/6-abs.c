#include "main.h"

/**
 * _abs -> computes the absolute value of a number
 *@n: parameter to hold the absolute value
 *Return:Absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

#include "main.h"
/**
* _isupper - checks for uppercase and returns 1 or 0
* @c:character to be checked
* Return: Always 0
*/

int _isupper(int c)
{
	if (isupper(c))
	{
	return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

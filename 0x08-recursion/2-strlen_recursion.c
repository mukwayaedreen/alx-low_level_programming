#include "main.h"

/**
* _strlen_recursion - return the length of the string
* @s: pointer to the string
* Return: 0
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}

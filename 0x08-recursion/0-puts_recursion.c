#include "main.h"

/**
* _puts_recursion - implements puts method
* @s: string to display
*
* Return: 0
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

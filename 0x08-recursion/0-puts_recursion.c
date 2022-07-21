#include "main.h"

/**
* _puts_recursion - implements puts method
* @s: string to display
*
* Return: 0
*/

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

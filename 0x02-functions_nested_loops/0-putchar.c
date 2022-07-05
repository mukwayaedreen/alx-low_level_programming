#include "main.h"

/**
 * main - prints putchar
* Description : using _putchar to print out _putchar
 * Returns: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	char text[] = "_putchar";

	while(text[i] != '\0')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

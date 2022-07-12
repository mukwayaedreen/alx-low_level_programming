#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts2 - prints every character of a string
* @str: string to be printed
* Return: always 0
*/

void puts2(char *str)
{
	int a, b;

	b = strlen(str);

	for (a = 0; a < b; a = a + 2)
	{
		putchar(str[a]);
	}
	putchar('\n');
}

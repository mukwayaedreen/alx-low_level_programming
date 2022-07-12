#include "main.h"

/**
* rev_string - fuction which reverses the entire string
* @s: string to be reversed
* Return: always 0
*/

void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	while (s[len])
		len++;

	/* swap each character */
	i = len;

	while (--i >= len / 2)
	{
		j = len - i - 1;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

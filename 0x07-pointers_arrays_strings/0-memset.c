#include "main.h"

/**
* *_memset - fills the memory
* @s: pointer to char
* @b: data to be stored
* @n: index
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
* *_strncat - concanates two strings using at most number n
* @dest: string being copied to
* @src: string they are copying
* @n: atmost number of string dest
* Return: always 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] == n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


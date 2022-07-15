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

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; i < n && src[j] != '\0'; j++)

		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}

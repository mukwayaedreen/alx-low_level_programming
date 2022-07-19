#include "main.h"

/**
* *_memcpy - copies some block of data
* @dest: string to which they are copying too
* @src: string they are copying
* @n: size of the array
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

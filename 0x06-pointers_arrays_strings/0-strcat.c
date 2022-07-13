#include "main.h"

/**
* *_strcat - concatenates src into dest
* @dest: string to which they are copying to to
* @src: string they are copying
* Return: always 0
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

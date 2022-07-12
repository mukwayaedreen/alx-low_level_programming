#include "main.h"
#include <string.h>

/**
* _strcpy - copies strings into another string
* @dest: string to be copied to
* @src: string we are copying from
* Return: always 0
*/

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}

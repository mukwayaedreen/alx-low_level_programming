#include "main.h"

/**
* *string_toupper - capiatalise a string
* @str: string to be capitalised
* Return: always 0
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}

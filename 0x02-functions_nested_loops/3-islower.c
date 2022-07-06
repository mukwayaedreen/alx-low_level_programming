#include "main.h"

/**
* _islower -> returns 1 if the char is lowercase and 0 otherwise
* @c: a character to be checked whether its lowercase ot uppercase
 * Description: check if c is lowercase
 *Return: Always 0 (success)
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

#include "main.h"

/**
 * _isalpha -> checks for a alphabetic character
 * @c: character to be chech
 *Return: Always 0 (success)
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}

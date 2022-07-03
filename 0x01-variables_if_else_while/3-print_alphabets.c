#include <stdio.h>

/**
 * main - Entry point
 * description: prints lowercase and uppercase alphabet
 * Return: Always 0 (success)
 */

int main(void)
{

int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}

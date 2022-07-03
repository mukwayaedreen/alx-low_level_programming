#include <stdio.h>

/**
 * main - Entry point
 * description: prints lowercase and uppercase alphabet
 * Return: Always 0 (success)
 */

int main(void)
{

char c = 'a';
char x = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (x <= 'Z')
{
putchar(x);
}
putchar('\n');

return (0);

#include <stdio.h>

/**
   * main - Prints all the numbers of base 16 in lowercase.
   * Return: Always 0.
   */

int main(void)
{

int num;
char leta;

for (num = 0; num < 10; num++)

putchar((num % 10) + '0');


for (leta = 'a'; leta <= 'f'; leta++)

putchar(leta);


putchar('\n');


return (0);
}

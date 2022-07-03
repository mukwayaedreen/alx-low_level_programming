#include <stdio.h>

/**
  * main - Prints the alphabet in lowercase, except for q and e.
  *
  * Return: Always 0.
  */

int main(void)

{

char lwc;

for (lwc = 'a'; lwc <= 'z'; lwc++)

{

if (lwc != 'e' && lwc != 'q')
putchar(lwc);
}
putchar('\n');

return (0);
}

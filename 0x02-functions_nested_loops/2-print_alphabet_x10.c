#include "main.h"
/**
 *  main - a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *  Rturn: Always 0
 */

void print_alphabet_x10(void)
{
int n;
int i;

while (n <= 10)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
n++;
}
}

#include "main.h"
/**
 *  main - a function that prints the alphabet, in lowercase, followed by a new line.
 *   Return: Always 0.
 */

void print_alphabet(void)
{
int n = 97;

while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');
}

#include "main.h"

/**
 * description: prints a string in reverse
 * Return: On success 1, On error -1
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

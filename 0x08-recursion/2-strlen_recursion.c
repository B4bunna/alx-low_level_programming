#include "main.h"

/**
 * description: returns Length of String
 * Return: On success 1, On error -1
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

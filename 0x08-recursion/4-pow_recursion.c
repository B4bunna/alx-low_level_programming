#include "main.h"

/**
 * description: raises x to the power of y
 * Return: On success 1, On error-1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

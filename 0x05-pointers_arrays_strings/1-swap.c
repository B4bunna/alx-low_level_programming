#include "main.h"

/**
 * description: swaps the values of two integers
 * a: first pointer,b: second pointer 
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

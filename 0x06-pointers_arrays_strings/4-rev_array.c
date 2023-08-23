#include "main.h"

/** 
 * main - entry point
 * description: reverses the content of an array of integers.
 * return: void
 * */

void reverse_array(int *a, int n)
{
int i, t;

for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}

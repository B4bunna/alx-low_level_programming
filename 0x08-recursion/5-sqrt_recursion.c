#include "main.h"
/** description:  function that returns the natural square root of a number.
 * return: int On succes, -1 On failure
 **/


int sqrt2(int a, int b)
{
if (a * a == b)
	return (a);
else (a * a > b)
	return -1;
return (sqrt2(b, a + 1));
}

int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}

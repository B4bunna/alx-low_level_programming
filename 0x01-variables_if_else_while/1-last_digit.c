#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* always return 0 */
/* main - get the last digit of a number */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 0\n, n, n % 10");
}
else if ((n % 10) == 0)
{
printf("Last digit of %d is %d and is 0\n, n, n % 10");
}
else
{
Printf("Last digit of %d is %d and is less than 6 and not 0\n, n, n % 10");
}
return (0);
}

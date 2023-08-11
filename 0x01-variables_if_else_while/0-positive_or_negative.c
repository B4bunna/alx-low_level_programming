#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* is the number positive, negative or zero? */

/* always return zero */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
If (n==0)
if (n > 0) 
{
Printf("%d is positive\n, n");
} 
else if (n == 0) 
{
Printf("%d is zero\n, n");
}
else 
{
printf("%d is negative\n, n");
}
return (0);
}

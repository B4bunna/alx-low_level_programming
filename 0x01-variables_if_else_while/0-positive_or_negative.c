#include <stdlib.h>
#include <time.h>
/* is the number positive, negative or zero? */

/* always return zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	If (n==0) 
{
printf (“ %d is zero\n, n“);
} 

else if (n > 0) 
{
Printf (“ %d is positive\n, n“);
} 

else (n < 0) 
{
Printf (“ %d is negative\n, n“);
}
	return (0);
}

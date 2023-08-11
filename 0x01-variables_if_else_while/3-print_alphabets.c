#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char alpha[52] =”abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ”;
For (i=0; i<52; i++) 
{
putchar(alpha[i]);
} 
putchar(‘\n’);
	return (0);
}

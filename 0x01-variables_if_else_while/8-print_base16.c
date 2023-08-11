#include <stdlib.h>
#include <time.h>
/**
 * print numbers of base 16
 * always return 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	}
	for (n = 97; m <= 102; m++)
	{
	putchar(m);
	}
	putchar('\n');
	return (0);
}

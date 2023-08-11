#include <stdlib.h>
#include <time.h>
/**
 *  main - prints alphabets
 *  'always return 0'
 */
int main(void)
{
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char alpha(52) = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i = 0; i < 52; i++)
	{
	putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}

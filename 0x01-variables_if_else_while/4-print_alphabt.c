#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** main - entry point
*Description: alpabets except q and e
*Always return 0
**/
int main(void)
{
	int n;
	
for (n = 97; n <= 122; n++) 
{
	if (n == 101 && n == 113)
	{
		continue;
		n++;
	}
putchar(n);
} 
putchar('\n');
	return (0);
}

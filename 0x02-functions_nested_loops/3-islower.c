#include "main.h"
/**
 *  main - a function that checks for lowercase character. 
 *  Description: always return 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else 
{
return (0);
}
_putchar('\n');
}

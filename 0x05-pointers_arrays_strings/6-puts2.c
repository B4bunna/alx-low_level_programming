#include "main.h"

/**
 * description: prints one char out of 2 of a string, followed by a new line
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

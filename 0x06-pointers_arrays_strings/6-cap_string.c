#include "main.h"

/**
 * mian - entry point 
 * description: capitalizes all words of a string
 * return: pointer to string
 * */

char *cap_string(char *)
{
int index = 0;

while (str[index])
{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;
	if (str[index - 1] == ' ' || 
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)
		str[index] -= 32;
	index++;
}
return (str);
}

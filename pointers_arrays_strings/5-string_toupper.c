#include "main.h"
#include <string.h>
/**
 * string_toupper - a function that change all letters to uupercase
 * @str: string to be upper
 * Return: a pointer of the upper string
 */
char *string_toupper(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}

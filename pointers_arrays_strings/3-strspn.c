#include "main.h"
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be check
 * @accept: prefix substring
 * Return: the number of bytes in initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	/* length */
	unsigned int c = 1;
	int i = strlen(accept);
	unsigned int index = 1;

	while (i > 0)
	{
		while (*accept)
		{
			if (*s == *accept)
				break;
			c++;
			accept++;
		}
		if (c == strlen(accept))
			return (0);

		index++;
		s++;
		i--;
	}
	return (index);
}

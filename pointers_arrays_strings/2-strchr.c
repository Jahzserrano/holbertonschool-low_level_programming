#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character un a string.
 * @s: string where character is.
 * @c: character to be found.
 * Return: a pointer of the character found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
		s++;
	}
	return (NULL);
}

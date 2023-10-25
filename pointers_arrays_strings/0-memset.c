#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s:
 * @b:
 * @n:
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (tmp);
}

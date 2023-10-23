#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: char to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;
	char *end, *begin, tmp;

	len = strlen(s);

	begin = s
	end = s + len - 1;

	for (i = 0; i < (len - 1) / 2; i++)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;
	}
}

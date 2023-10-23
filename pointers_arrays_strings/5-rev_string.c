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

	len = strlen(s) - 1;
	
	begin = s;
	end = s + len;

	for (i = 0; i < len / 2; i++)
	{
		tmp = *begin;
		*begin = *end;
		*end = tmp;

		begin++;
		end--;
	}

}

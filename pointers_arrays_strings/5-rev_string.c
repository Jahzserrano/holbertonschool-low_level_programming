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
	int len;
	int i;
	char tmp;

	len = strlen(s) - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}

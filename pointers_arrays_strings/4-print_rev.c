#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a strng in reverse.
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *end;
	int len;

	len = strlen(s);

	end = s + len - 1;

	while (len != 0)
	{
		_putchar(*end);
		end--;
		len--;
	}
	_putchar('\n');
}

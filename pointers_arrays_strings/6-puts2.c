#include "main.h"
/**
 * puts2 - function that prints every other character of a string.
 * @str: holds the string to be printed.
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if ((*str - 48) % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

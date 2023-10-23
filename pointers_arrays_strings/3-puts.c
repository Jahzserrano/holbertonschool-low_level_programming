#include "main.h"
/**
 * _puts - function that prints a string, followed by a ne line.
 *
 * @str: holds memory address
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

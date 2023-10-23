#include "main.h"
#include <stdlib.h>
/**
 * puts_half - function that prints half og a string
 * @str: holds varibale to be printed 
 *
 * Return: void
 */
void puts_half(char *str)
{
	

	while (*str != '\0')
	{
		if (((*str - 48) % 2) != 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - function that prints half og a string
 * @str: holds varibale to be printed 
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n, len;

	len = strlen(str);

	if (len & 1)
	{
		len = len - 1;
		n = (len / 2);
	}
	else
	{
		n = (len / 2);
	}
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

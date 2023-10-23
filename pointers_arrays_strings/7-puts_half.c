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
	int n, length_of_the_string;

	length_of_the_string = strlen(str);

	if (length_of_the_string & 1)
	{
		length_of_the_string = length_of_the_string - 1;
		n = (length_of_the_string / 2);
	}
	else
	{
		n = (length_of_the_string / 2);
	}
	while (n < length_of_the_string)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

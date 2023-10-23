#include "main.h"
/**
 * puts_half - function that prints half og a string
 * @str: holds varibale to be printed
 */

void puts_half(char *str)
{
	int n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len & 1)
	{
		for (n = len - 1 / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	else
	{
		for (n = len / 2; str[n] == '\0'; n++)
		{
			_putchar(str[n]);

		}
	}




}

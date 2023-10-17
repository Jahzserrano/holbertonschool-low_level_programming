#include "main.h"
#include <limits.h>
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: Number to be checked.
 * Return: The last digit of a number.
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = ((-1 * n) % 10);
		_putchar(ld + '0');
	}
	else if (n == INT_MIN)
	{
		ld = (n % 10);
		_putchar(ld - '0');
	}
	else
	{
		ld = (n % 10);
		_putchar(ld + '0');
	}
	return (ld);
}

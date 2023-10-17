#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: Number to be checked.
 * Return: The last digit of a number.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int ld = ((-1 * n) % 10);
	}
	else
	{
		int ld = (n % 10);
	}
	_putchar(ld + '0');
	return (ld);
}

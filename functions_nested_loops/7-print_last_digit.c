#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @n: Number to be checked.
 * Return: The last digit of a number.
 */
int print_last_digit(int n)
{
	int ld = (n % 10);
	_putchar(ld);
	return ld;
}

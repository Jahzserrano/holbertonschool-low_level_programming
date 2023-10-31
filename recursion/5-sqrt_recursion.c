#include "main.h"
#include <float.h>
/**
 * _sqrt_recursion - a function that returns natural square
 * sqrt_helper - helper function to calculate square root
 * @n: number to be square
 * Return: the square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0));
}
/**
 * sqrt_helper - a helper function to calc sqaure root.
 * @n: number to be square
 * @i: heler variable
 * Return: the square
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (sqrt_helper(n, i + 1));
}

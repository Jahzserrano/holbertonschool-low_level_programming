#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return sum of 2 digits
 * @a: first digit
 * @b: second digit
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -return dif of 2 numbers
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return division of two numbers.
 * @a: first number
 * @b: second number
 *
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return remainder of the division
 * @a: first number
 * @b: second number
 *
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}

#include "main.h"
/**
 * print_square - function that prints a square.
 * @size: is the size of the square.
 *
 * Return: void.
 */
void print_square(int size)
{
	int width;
	int height;

	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

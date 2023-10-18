#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 * @size: is the size of the trangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int w;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			if (h < size)
			{
				_putchar(' ');

			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

}

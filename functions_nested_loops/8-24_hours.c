#include "main.h"
/**
 * jack_bauer - functions that prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 60; min++)
		{
			if (hour < 10 && min < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
				_putchar(':');
				_putchar('0');
				_putchar(min + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(hour + '0');
				_putchar(':');
				_putchar(min + '0');
			}
		}
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int xtime;

	for (xtime = 0; xtime <= 9; xtime++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
	putchar('\n');
}

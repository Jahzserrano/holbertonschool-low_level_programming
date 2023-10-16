#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}

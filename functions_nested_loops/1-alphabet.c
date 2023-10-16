#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/* print the alphabet */
void print_alphabet(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
               _putchar(ch);
        }
        putchar('\n');
}

/* print any char */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


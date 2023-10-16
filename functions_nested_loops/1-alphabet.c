#include <unistd.h>
#include <stdio.h>
#include "main.h"
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
       _putchar('\n');
}

/* print any char */
int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}

#ifndef _main_h
#define _main_h
#include <stdio.h>

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
#endif

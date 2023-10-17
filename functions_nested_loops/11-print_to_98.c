#include "main.h"

void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", n);
		}
	}
	else if (n == 98)
	{
		prinf("%d", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", n);
		}
	}
}

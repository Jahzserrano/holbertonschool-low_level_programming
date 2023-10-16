#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		puts("is positive\n");
	}
	if (n == 0)
	{
		puts("is zero\n");
	}
	if (n < 0)
	{
		puts("is negative\n");
	}
	return (0);
}

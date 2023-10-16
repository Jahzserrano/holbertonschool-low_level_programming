#include <stdio.h>
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
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5");
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0");
	}
	return (0);
}

#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i =  0; 

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	return (0);
}

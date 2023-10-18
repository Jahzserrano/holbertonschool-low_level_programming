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
			printf("FizzBuzz\n");
		}
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz\n");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
	return (0);
}

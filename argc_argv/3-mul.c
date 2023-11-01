#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv:  array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n1, n2, res;

	if (!argv[1])
	{
		printf("Error\n");
		return (0);
	}

	(void)argc;

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);
	return (0);
}

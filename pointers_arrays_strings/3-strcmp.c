#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: an integer indicating the result of the comparison.
 */
int _strcmp(char *s1, char *s2)
{
	int i, res_s1, res_s2;
	int len_s1, len_s2;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	res_s1 = 0;
	res_s2 = 0;

	printf("len_s1: %d\nlen_s2: %d\n", len_s1, len_s2);
	if (len_s1 > len_s2)
		return (15);

	if (len_s1 < len_s2)
		return (-15);

	for (i = 0; i < len_s1 && s1#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}[i] != '\0'; i++)
	{
		res_s1 = res_s1 + (int)s1[i];
		res_s2 = res_s2 + (int)s2[i];

		printf("res_s1: %d\nres_s2: %d\n", res_s1, res_s2);
	}
	if (res_s1 > res_s2)
		return (15);

	if (res_s1 < res_s2)
		return (-15);

	else
		return (0);
}

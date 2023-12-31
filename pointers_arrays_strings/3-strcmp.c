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
	char c1, c2;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);
	return (c1 - c2);
}

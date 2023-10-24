#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: where the string will be copy.
 * @src: the string to be copy.
 * @n: n amount of bytes to be copy.
 * Return: a pointer of the copy string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

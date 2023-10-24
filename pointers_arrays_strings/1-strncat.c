#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatrnates two strings
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: bytes
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

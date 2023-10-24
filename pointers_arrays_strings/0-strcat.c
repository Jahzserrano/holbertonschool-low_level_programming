#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: string to concatenated
 * @src: string to concatenated
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len_d, len_s;

	len_d = strlen(dest);
	len_s = 0;

	while (src[len_s] != '\0')
	{
		dest[len_d + len_s] = src[len_s];
		len_s++;
	}
	return (dest);
}

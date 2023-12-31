#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates to strings
 * @s1: string to concatenate
 * @s2: string to concatenate to s1
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_index++]  = s2[i];
	return (concat_str);
}

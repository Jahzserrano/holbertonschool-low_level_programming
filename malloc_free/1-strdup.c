#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - return a pointer to newly located space in memory
 * @str: string to be copied
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i= 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';
	return (dup);
}

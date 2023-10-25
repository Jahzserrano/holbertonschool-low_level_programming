#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: string to be encoded.
 * Return: a pointer of the string encoded.
 */
char *leet(char *str)
{
	char *tmp = str;
	char key[] = {'A', 'E', 'I', '0', 'U'};
	int value[] = {4, 3, 2, 1, 0};
	unsigned int i;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == key[i] || *str == key[i] + 32)
			{
				*str = 48 + value[i];
			}
		}
		str++;
	}
	return (tmp);
}

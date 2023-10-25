#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str: string to be encoded.
 * Return: a pointer of the string encoded.
 */
char *leet(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] == 'a')
				str[i] = str[i] - 45;

			if (str[i] == 'A')
				str[i] = str[i] - 13;

			if (str[i] == 'e')
				str[i] = str[i] - 50;

			if (str[i] == 'E')
				str[i] = str[i] - 18;

			if (str[i] == 'o')
				str[i] = str[i] - 63;

			if (str[i] == 'O')
				str[i] = str[i] - 31;

			if (str[i] == 't')
				str[i] = str[i] - 61;

			if (str[i] == 'T')
				str[i] = str[i] - 29;

			if (str[i] == 'l')
				str[i] = str[i] - 59;

			if (str[i] == 'L')
				str[i] = str[i] - 27;
		}
		i++;
	}
	return (str);
}

#include "main.h"
/**
 * cap_string - a function that capitalize all word of a string.
 * @str: string to be capitalize.
 * Return: a pointer of the capitalize string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			char tmp;

			tmp = str[i - 1];
			if (tmp == '\t' || tmp == '\n')
				str[i] = str[i] - 32;

			if (tmp == '{' || tmp == '}')
				str[i] = str[i] - 32;

			if (tmp == '(' || tmp == ')')
				str[i] = str[i] - 32;

			if (tmp == ',' || tmp == '.' || tmp == ';')
				str[i] = str[i] - 32;

			if (tmp == '?' || tmp == '!')
				str[i] = str[i] - 32;

			if (tmp == ' ' || tmp == '"')
				str[i] = str[i] - 32;
			if (i == 0)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

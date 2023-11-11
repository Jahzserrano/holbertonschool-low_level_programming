#include "main.h"
#include <stdlib.h>
/**
 * create_array - fuction taht creates an array of chars
 * @size: array's size
 * @c: specific char to initialize
 * Return: 0 
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

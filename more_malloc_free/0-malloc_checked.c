#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory
 * @b: number of bytes to allocate
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}

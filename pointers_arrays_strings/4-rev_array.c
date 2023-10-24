#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content.
 * @a: array of integers.
 * @n: is the number og elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}

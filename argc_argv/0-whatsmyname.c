#include <stdio.h>
#include "main.h"
/**
 * whatsmyname - a function that prints its name
 * @argc: the count of arguments
 * @argv: array of strings
 */

int main(int argc, char **argv)
{
	whatsmyname(argv, argc - 1);
	return (0);

}	

void whatsmyname(char **s, int c)
{
	printf("%s\n", s[c]);
}

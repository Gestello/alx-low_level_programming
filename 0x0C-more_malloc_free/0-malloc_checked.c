#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of buffer
 * @p: character value
 * Return: pointer to buffer
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

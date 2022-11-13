#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - allocate memory for an array
 * @nmemb: number of element
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * If nmemb or size is 0, return NULL
 * If malloc fails, return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}

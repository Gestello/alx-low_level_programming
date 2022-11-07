#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: pointer to source memory
 * @dest: pointer to destination memory area
 * @n: number of bytes to copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

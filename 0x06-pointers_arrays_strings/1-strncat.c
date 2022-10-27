#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}

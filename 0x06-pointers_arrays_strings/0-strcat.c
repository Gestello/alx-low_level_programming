#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @src: the source string
 * @dest: the destination string to be concatenated
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src);
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++ i++)
		dest[i]  = src[j];
	dest[i] = '\0';

	return (dest);

}

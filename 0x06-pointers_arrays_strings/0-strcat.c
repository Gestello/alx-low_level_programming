#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @src: the source string
 * @dest: the destination string to be concatenated
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
	if (*(src + j) == '\0')
		break;
		i++;
		j++;
	}
	return (dest);
}

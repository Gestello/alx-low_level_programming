#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * segment to compare bytes
 * @accept: string of bytes to compare with
 * Return: number of bytes in segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

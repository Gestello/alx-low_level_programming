#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @s: input string
 * Return: the pointer to the changed string.
 */

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;

		j++;
	}

	return (s);

}

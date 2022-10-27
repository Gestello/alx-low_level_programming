#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int stringcount, rotation;
	char r1[] =	{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v' 'w', 'x', 'y',
			'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
			'Z'};
	char r2[] =	{'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
			'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
			'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			'M'};

	for (stringcount = 0; s[stringcount] != '\0'; stringcount++)
	{
		for (rotation = 0; rotation < 53; rotation++)
		{
			if (r1[rotation] == s[stringcount])
			{
				s[stringcount] = r2[rotation];
				break;
			}
		}
	}
	return (s);
}
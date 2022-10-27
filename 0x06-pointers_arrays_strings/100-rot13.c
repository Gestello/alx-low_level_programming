#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	int stringcount, rotation;
	char r1[] =	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r2[] =	"nopqrstuvwxyzabcdefghijklmNOPGRSTUVWXYZABCDEFGHIJKLM";

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

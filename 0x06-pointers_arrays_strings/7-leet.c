#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: sting input
 * Return: string
 */

char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				str[i] = code[j];
		}
	}
	return (str);
}

#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the used string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int j, k;
	char i[1000];

	j = k = 0;
	while (s[j] != '\0')
	{
		i[j] = s[j];
		j++;
	}
	j--;
	while (j >= 0)
	{
		s[j] = i[k];
		j--;
		k++;
	}
	s[k++] = '\0';
}

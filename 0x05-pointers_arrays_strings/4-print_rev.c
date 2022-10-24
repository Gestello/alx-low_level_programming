#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string, followed by a new line
 * @s: input string to print
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	while (j--)
		putchar(s[j]);
	putchar('\n');
}

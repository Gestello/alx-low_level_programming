#include <stdio.h>
#include "main.h"

/**
 * puts_half - print out the first half of a string
 * @str: input string to print
 * Return: half of input
 */

void puts_half(char *str)
{
	int l, n, e;

	e = 0;

	for (l = 0; str[l] != '\0'; l++)
		e++;

	n = (e / 2);

	if ((e % 2) == 1)
		n = ((e + 1) / 2);

	for (l = n; str[l] != '\0'; l++)
		putchar(str[l]);
	putchar('\n');
}

#include "main.h"

/**
 * _puts_recurion - print a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');

		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}

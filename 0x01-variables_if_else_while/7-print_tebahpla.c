#include <stdio.h>

/**
 * main - print alphabet in reverse.
 * Return:0
 */

int main(void)
{

	char c = 'Z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	putchar('\n');
	}
	return (0);
}

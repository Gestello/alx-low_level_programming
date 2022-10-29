#include "main.h"

/**
 * print_number - function print integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		putchar(((i / count) % 10) + 48);
	}
}

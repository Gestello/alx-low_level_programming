#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0-14
 * Return: 10 times of the number from 0-14
 */

void more_numbers(void)
{
	int i, n;

	n = 0;
	while (n <= 9)
	{
		for (i = 0; i < 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		n++;
		putchar('\n');
	}
}

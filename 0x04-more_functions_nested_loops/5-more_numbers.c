#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0-14
 * Return: 10 times of the number from 0-14
 */

void more_numbers(void)
{
	int i, n;

	i = 0;
	while (i < 10)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				putchar((n / 10) + 48);
			}
			putchar((n % 10) + 48);
		}

		putchar('\n');

		i++;
	}
}

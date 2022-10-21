#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0-14
 * Return: 10 times of the number from 0-14
 */

void more_numbers(void)
{
	int a, b;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)

		{
			if (b >= 10)
			{
				putchar((b / 10) + '0');
			}
			putchar((b % 10) + '0');
		}
		putchar('\n');
		a++;
	}
}

#include <stdio.h>

/**
 * main - print numbers from 1-100
 * for multiples of 3, print Fizz
 * for multiples of five print Buzz
 * for multiples of both three and five print FizzBuzz
 *
 * Return: 0 (on success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

	}
}

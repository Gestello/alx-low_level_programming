#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: generated password
 */

int main(void)
{
	char d;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		d = rand() % 128;
		x += d;
		putchar(d);
	}
	putchar (2772 - x);

	return (0);
}

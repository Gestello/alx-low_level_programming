#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds all arguements together if they are digits
 * @argc: arguements count only accept ints
 * @argv: arguement vector
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

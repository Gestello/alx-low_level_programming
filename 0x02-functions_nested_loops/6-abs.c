#include "main.h"

/**
 * _abs - compute absolute value of an integer
 * @r: input
 * Return: the absolute value
 */
int _abs(int r)
{
	if (r < 0)
		r *= -1;
	return (r);
}

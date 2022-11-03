#include "main.h"

/**
 * sqrt_check - check for the square root of s
 * @s: guess sqrt
 * @r: number to find sqrt of
 * Return: -1 or square root of s
 */

int sqrt_check(int s, int r)
{
	if (s * s == r)
		return (s);
	if (s * s > r)
		return (-1);
	return (sqrt_check(s + 1, r));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 * Return: the natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

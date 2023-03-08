#include "main.h"
int calc_sqrt(int n, int r);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calc_sqrt(n, 0));
}

/**
 * calc_sqrt - calculates square root
 * @n: number to calculate the sqaure root of
 * @r: potential root
 * Return: square root
 */
int calc_sqrt(int n, int r)
{
	if (r * r > n)
		{
		return (-1);
		}
	if (r * r == n)
		{
		return (r);
		}
	return (calc_sqrt(n, r + 1));
}

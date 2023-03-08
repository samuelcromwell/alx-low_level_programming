#include "main.h"
/**
 * find_sqrt - Finds the natural square root of an inputted number
 * @num: The number to find the square root of
 * @root: The root to be tested
 * Return: int
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * find_sqrt - returns the natural square root of a number
 * @n: number to return the square root of
 * Return: int
 */

int find_sqrt(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}

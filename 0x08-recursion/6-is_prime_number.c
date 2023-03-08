#include "main.h"
/**
 * is_divisible - checks if a number is divisible
 * @num: number to be checked
 * @div: the divisor
 * Return: If the number is divisible - 0
 * If the number is not divisible - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

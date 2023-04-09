#include "main.h"

/**
 * get_bit - return value at index in decimal
 * @n: number to get
 * @index: the index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if (index > 63)
return (-1);
bit_value = (n >> index) & 1;
return (bit_val);
}

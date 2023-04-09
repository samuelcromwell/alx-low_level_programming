#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned bit
 * @b: pointer to a 0 and 1 character string
 * Return: The converted number or 0 if it fails oor its NULL
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int decimal_val = 0;
if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
decimal_val = 2 * decimal_val + (b[i] - '0');
}
return (decimal_val);
}

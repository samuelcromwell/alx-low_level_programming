#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned bit
 * @b: pointer to a 0 and 1 character string
 * Return: The converted number or 0 if it fails oor its NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int Number = 0;
int n;

if (!b)
return (0);

for (n = 0; b[n]; n++)
{
if (b[n] < '0' || b[n] > '1')
{
return (0);
}

Number = 2 * Number + (b[n] - '0');
}
return (Number);
}

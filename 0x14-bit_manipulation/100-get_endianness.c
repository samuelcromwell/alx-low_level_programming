#include "main.h"

/**
 * get_endianness - checks if machine is big or little endian
 * Return: 0 big, 1 little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}

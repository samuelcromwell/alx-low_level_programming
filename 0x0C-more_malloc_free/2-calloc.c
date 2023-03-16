#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memor and returns a pointer to the allocated memory
 * @nmemb: number of elements
 * @size: byte size of each array element
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}

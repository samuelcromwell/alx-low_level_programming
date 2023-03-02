#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: the buffer size
 * Return:  A pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r);
{
	int d1 = 0, d2 = 0, pq, ch, es1, es2, add = 0;

	while (*(n1 + d1) != '\0')
		d1++;
	while (*(n2 + d2) != '\0')
		d2++;
	if (d1 >= d2)
		ch = d1;
	else
		ch = d2;
	if (size_r <= ch + 1)
		return (0);
	r[ch + 1] = '\0';
	d1--, d2--, size_r--;
	es1 = *(n1 + d1) - 48, es2 = *(n2 + d2) - 48;
	while (ch >= 0)
	{
		pq = es1 + es2 + add;
		if (pq >= 10)
			add = pq / 10;
		else
			add = 0;
		if (pq > 0)
		*(r + ch) = (pq % 10) + 48;
		else
			*(r + ch) = '0';
		if (d1 > 0)
			d1--, es1 = *(n1 + d1) - 48;
		else
			es1 = 0;
		if (d2 > 0)
			d2--, es2 = *(n2 + d2) - 48;
		else
			es2 = 0;
		ch--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}

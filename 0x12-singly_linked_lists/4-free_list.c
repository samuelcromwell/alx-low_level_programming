#include "lists.h"

/**
 * free_list - a function that free a `list_t` list
 * @head: head of linked list
 */

void free_list(list_t *head)
{
	list_t *pres;
	list_t *n;

	pres = head;

	while (pres != NULL)
	{
		n = pres->next;
		free(pres->str);
		free(pres);
		pres = n;
	}
}

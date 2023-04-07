#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in a list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node being searched for and NULL if not present
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;

for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}

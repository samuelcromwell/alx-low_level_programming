#include "lists.h"

/**
 * pop_listint - deletes the first node of a linked list
 * @head: a pointer to the first element in the linked list
 *
 * Return: the data that was deleted from the element or a
 * 0 if the list is found to be empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}

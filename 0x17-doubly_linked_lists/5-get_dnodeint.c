#include "lists.h"
/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == 0)
		return (NULL);

	temp = head;
	for (i = 0; i < index && temp->next != 0; i++)
		temp = temp->next;
	return (temp);
}

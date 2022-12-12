#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new, *rev;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		new->prev = NULL;
		return (new);
	}

	temp = rev = *h;
	for (i = 0; i < idx && temp; ++i)
	{
		temp = temp->next;
		if (i == idx - 1)
			break;
		rev = temp;
	}
	if (temp == NULL)
		return (NULL);
	new->next = temp;
	temp->prev = new;
	new->prev = rev;
	rev->next = new;

	return (new);
}

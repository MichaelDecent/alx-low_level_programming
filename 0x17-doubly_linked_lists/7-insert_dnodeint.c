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
	dlistint_t *new, *tmp;
	unsigned int i;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = (*h);
		if (*h)
			(*h)->prev = new;
		(*h) = new;
		new->prev = NULL;
		return (new);
	}
	tmp = *h;
	i = 0;
	while (tmp && i < idx - 1)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next)/*edge case*/
		tmp->next->prev = new;
	tmp->next = new;
	return (new);
}


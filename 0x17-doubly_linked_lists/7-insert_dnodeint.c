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
	unsigned int i = 0;
	dlistint_t *temp, *new, *temp2;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	temp = *h;
	while (i < idx)
	{
		if (temp == NULL)
			return (NULL);
		temp2 = temp;
		temp = temp->next;
		i++;
	};
	temp2->next = new;
	new->prev = temp;
	temp->prev = new;
	new->next = temp;
	
	return (new);
}

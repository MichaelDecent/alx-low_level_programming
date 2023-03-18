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
	unsigned int i = 0, len = 0;
	dlistint_t *temp, *new, *temp2;

	len = list_len(h);
	if (idx > len)
		return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if (idx == len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	while (i < idx)
	{
		temp2 = temp;
		temp = temp->next;
		i++;
	}
	temp2->next = new;
	new->prev = temp2;
	temp->prev = new;
	new->next = temp;
	return (new);;
}
/**
 * list_len - A function that the length of the list
 * @head: a pointer to the head node
 *
 * Return: length of the list
 */
int list_len(dlistint_t **head)
{
	int len = 0;
	dlistint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = (temp)->next;
		len++;
	}
	return (len);
}

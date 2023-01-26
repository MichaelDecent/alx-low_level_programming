#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 * @h: a pointer to node
 *
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t no_node;

	if (h == NULL)
		return (0);

	temp = h;
	no_node = 0;
	while (temp != NULL)
	{
		h = temp->next;
		temp = h;
		no_node++;
	}

	return (no_node);
}

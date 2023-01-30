#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: a pointer to the head node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_node;
	listint_t *temp;

	no_node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		temp = h->next;
		h = temp;
		no_node++;
	}
	return (no_node);
}

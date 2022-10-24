#include "lists.h"
/**
 * print_listint - A function that prints all elements
 * of the structure listint_t
 * @h: A pointer to the headnode
 *
 * Return: Number of node
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}



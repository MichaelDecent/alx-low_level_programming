#include "lists.h"
/**
* print_dlistint - prints all the elements of a list
*
* @h: head of the list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes = 0;

	if (h == NULL)
		return (no_nodes);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no_nodes++;
	}
	return (no_nodes);


}

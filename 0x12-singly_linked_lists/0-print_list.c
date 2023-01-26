#include "lists.h"
/**
 * print_list - prints the all element of a list_t list
 * @h: pointer to a node
 *
 * Return: number of element
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t no_node;

	if (h == NULL)
		return (0);

	temp = h;
	no_node = 0;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		h = temp->next;
		temp = h;
		no_node++;
	}

	return (no_node);
}

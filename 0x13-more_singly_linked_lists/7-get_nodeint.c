#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list
 * and NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		temp = head->next;
		head = temp;
		i++;
	}
	return (head);
}


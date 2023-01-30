#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to head pointer
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *prev;

	if (*head == NULL)
		return (-1);

	prev = *head;
	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}

	i = 0;
	while (i < index)
	{
		if (prev->next == NULL)
			return (-1);
		temp = prev->next;
		if (i == (index - 1))
			break;
		prev = temp;
		i++;
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}

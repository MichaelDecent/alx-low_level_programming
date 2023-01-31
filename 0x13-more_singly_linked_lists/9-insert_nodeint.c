#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 * @head: pointer to the head pointer
 * @idx: index of the list where the new node should be added
 * @n: number to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	listint_t *prev;

	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	i = 0;
	prev = *head;
	while (i < idx)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = prev->next;
		if (i == (idx - 1))
			break;
		prev = temp;
		i++;
	}
	new_node->next = temp;
	prev->next = new_node;

	return (new_node);
}

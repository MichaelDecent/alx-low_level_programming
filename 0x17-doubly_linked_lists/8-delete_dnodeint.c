#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *hold;
	unsigned int i = 0, len = 0;

	if (*head == NULL)
		return (-1);
	len = list_len(head);
	temp = *head;
	if (index > len - 1)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
		temp->prev = NULL;
		return (1);
	}
	if (index == len - 1)
	{
		while (temp->next != NULL)
		{
			hold = temp;
			temp = temp->next;
		}
		free(temp);
		hold->next = NULL;
		return (1);
	}
	while (i < index)
	{
		hold = temp;
		temp = temp->next;
		i++;
	}
	hold->next = temp->next;
	temp->next->prev = hold;
	printf("%d\n", temp->n);
	free(temp);
	return (1);
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


#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to head node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
		while ((*head)->next != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		free(*head);
		*head = NULL;
	}
}



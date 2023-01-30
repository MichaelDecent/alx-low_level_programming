#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: a pointer to head node
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}


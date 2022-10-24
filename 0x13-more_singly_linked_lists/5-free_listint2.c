#include "lists.h"
/**
 * free_listint2 - A function that frees a structure listint_t
 * @head: A pointer to a node
 */
void free_listint2(listint_t *head)
{
	listint_t *temp;

	if (*head == NULL)
		free(*head);


	while (*head->next != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	free(*head);


}

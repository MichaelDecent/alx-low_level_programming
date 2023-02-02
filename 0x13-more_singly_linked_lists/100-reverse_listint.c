#include "lists.h"
/**
 * reverse_listint -  a function that reverses a listint_t linked list.
 * @head: pointer to head pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (*head == NULL)
		return (NULL);

	temp = (*head)->next;
	(*head)->next = NULL;
	while (temp->next != NULL)
	{
		temp2 = temp->next;
		temp->next = *head;
		*head = temp;
		temp = temp2;
	}
	temp->next = *head;
	*head = temp;

	return (*head);
}

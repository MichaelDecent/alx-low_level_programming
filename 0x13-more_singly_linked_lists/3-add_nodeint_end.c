#include "lists.h"
/**
 * add_nodeint_end - a function that adds a
 * new node at the end of a listint_t list
 * @head: a pointer to the head pointer
 * @n: integer to the stored
 *
 * Return: an address to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *prev;
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = prev = *head;
		while (temp->next != NULL)
		{
			temp = prev->next;
			prev = temp;
		}
		temp->next = new;
	}
	return (new);
}

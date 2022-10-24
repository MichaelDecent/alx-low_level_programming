#include "lists.h"
/**
 * add_nodeint -  A function that add a new at the
 * beginning of a listint_t list
 * @head: a pointer to a node
 * @n: an integer
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (0);
	newnode->n = n;

	if (*head == NULL)
		*head = newnode;

	else
	{
		newnode->next = *head;
		*head = newnode;
	}

	return (*head);
}

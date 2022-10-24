#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 * @head: A pointer to a node
 * @n: an integer
 *
 * Return: address of the new element
 * or NULL if fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (0);
	newnode->n = n;

	if (*head == NULL)
		*head = temp = newnode;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		temp = newnode;
		temp->next = NULL;

	}
	return (temp);
}

#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the end of a list_t list
 * @head: a pointer to head
 * @str: string to be added
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int lent;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	lent = 1;
	while (str[lent])
		lent++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = lent;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}

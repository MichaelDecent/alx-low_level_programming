#include "lists.h"
/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list
 * @head: pointer to the head node
 * @str: string to insert
 *
 * Return: address to new element;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int lent;
	list_t *new_node;
	list_t *temp;
	list_t *temp2;

	lent = 0;
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
		temp = temp2 = *head;
		while (temp->next != NULL)
		{
			temp = temp2->next;
			temp2 = temp;
		}
		temp->next = new_node;
		new_node->next = NULL;
	}
	return (temp);
}

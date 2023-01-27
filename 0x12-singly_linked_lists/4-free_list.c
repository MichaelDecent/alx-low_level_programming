#include "lists.h"
/**
 * free_list - a function that frees a list_t list
 * @head: pointer to the node
 *
 */
void free_list(list_t *head)
{
	list_t *temp;


	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free(head);
			free(head->str);
			head = temp;
		}
		free(head->str);
		free(head);
	}
}

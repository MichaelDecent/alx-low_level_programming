#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: a pointer to head node
 *
 * Return: sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		temp = head->next;
		head = temp;
	}
	return (sum);
}

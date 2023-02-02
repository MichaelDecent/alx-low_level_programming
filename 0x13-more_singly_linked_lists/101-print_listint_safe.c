#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to head node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num;
	const listint_t *temp;

	if (head == NULL)
		exit(98);

	temp = head;
	num = 0;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
		num++;
	}
	return (num);
}

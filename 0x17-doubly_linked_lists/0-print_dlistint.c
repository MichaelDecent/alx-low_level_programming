#include "lists.h"
/**
 * print_dlistint - A function that prints all
 * the elements of a dlistint_t list
 * @h: a head pointer that points to first node
 *
 * Return: number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t n;

	temp = h;
	n = 0;
	while (temp != 0)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}

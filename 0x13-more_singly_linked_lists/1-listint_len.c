#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: a pointer to head node
 *
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t num;
	listint_t *temp;

	num = 0;
	while (h != NULL)
	{
		temp = h->next;
		h = temp;
		num++;
	}
	return (num);
}

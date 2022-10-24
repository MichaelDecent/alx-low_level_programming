#include "lists.h"
/**
 * listint_len - A function that prints all elements
 * of the structure listint_t
 * @h: A pointer to the headnode
 * 
 * Return: Number of node
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num = 0;


	if (h == NULL)
		return (0);


	while (h != NULL)
	{
		h = h->next;
		num++;
	}


	return (num);
}

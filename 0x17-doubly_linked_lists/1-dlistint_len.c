#include "lists.h"

/**
* dlistint_len - prints the size of a given list
*
* @h: head of the list
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
        size_t no_nodes = 0;

        if (h == NULL)
                return (no_nodes);
        while (h != NULL)
        {
                h = h->next;
                no_nodes++;
        }
        return (no_nodes);
}


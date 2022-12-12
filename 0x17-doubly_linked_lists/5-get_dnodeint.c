#include "main.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t  temp;
        int i;
        if (head == 0)
                return (NULL);

        if (head != 0)
                temp == head;
        for (i = 0; i < index && temp->next != 0; i++)
                temp = temp->next;

        return (temp);
}

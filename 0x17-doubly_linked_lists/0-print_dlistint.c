#include "lists.h"
#include <stdio.h>
size_t print_dlistint(const dlistint_t *h)
{
    int i;
    i = 0;

    h = malloc(sizeof(dlistint_t));
    if (h == NULL)
    {
        return (i);
    }
    while (h->prev != NULL)
    {
        h = h->prev;
    }
    while (h != NULL)
    {
        printf("%d", h->n);
        i++;
        h = h->next;
    }
    return (i);
}

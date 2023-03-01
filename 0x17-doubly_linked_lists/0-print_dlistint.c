#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of a list
 * @h: head pointer
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int i;
i = 0;
if (h == NULL)
{
printf("Can't allocate");
}
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}

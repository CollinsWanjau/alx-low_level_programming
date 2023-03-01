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
const dlistint_t *head;
int i;
head = h;
if (!head)
{
return (0);
}
while (head->prev != NULL)
{
head = head->prev;
printf("%d\n", head->n);
}
while (head != NULL)
{
printf("%d\n", head->n);
head = head->next;
i++;
}
return (i);
}

#include "lists.h"

/**
 * listint_len -  a function that returns number of elements in a linked list
 * @h: a pointer to head
 *
 * Return: count of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *temp = h;
while (temp != NULL)
{
count++;
temp = temp->next;
}
return (count);
}

#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *head;
size_t i = 0;
head = h;
if (!head)
{
return (0);
}
while (head->prev)
{
head = head->prev;
}
while (head != 0)
{
head = head->next;
i++;
}
return (i); 
}

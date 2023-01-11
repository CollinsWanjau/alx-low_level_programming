#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: a pointer to the first node of the list
 * @index: index of a node
 *
 * Return: nth node, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current = head;
if (head == NULL)
{
return (NULL);
}
for (i = 0; i < (index); i++)
{
if (current->next == NULL)
{
return (NULL);
}
current = current->next;
}
return (current);
}

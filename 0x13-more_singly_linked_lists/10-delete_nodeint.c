#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index
 * @head: a pointer to a pointer of the head of list
 * @index: index where the data is deleted
 *
 * Return: Always (0)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *current = *head;
unsigned int i;
if (!head || !*head)
return (-1);
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
for (i = 0; i < index - 1; i++)
{
if (!current || !current->next)
return (-1);
current = current->next;
}
temp = current->next;
current->next = temp->next;
free(temp);
return (1);
}

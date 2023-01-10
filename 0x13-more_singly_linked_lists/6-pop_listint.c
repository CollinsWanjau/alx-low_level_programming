#include "lists.h"

/**
 * pop_listint - deletes the head node of a list, returns the head node's data
 * @head: a pointer to a pointer of the first node
 *
 * Return: head node
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
if (head == NULL)
{
return (0);
}
temp = *head;
n = temp->n;
*head = temp->next;
free(temp);
return (n);
}

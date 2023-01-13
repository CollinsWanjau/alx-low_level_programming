#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to the head of linked list
 *
 * Return: pointer to the first node in the head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}

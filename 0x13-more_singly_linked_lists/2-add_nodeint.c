#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer of head list
 * @n: integer to be added to a new node
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
/**
 * starts allocating memory for the new node using malloc
 */
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return NULL;    
}
/**
 * assigns value of n to the member n of newly allocated node and it sets the
 * next pointer of the new node to point to the current head of the linked list
 */
new->n = n;
new->next = *head;
*head = new;
return(new);
}

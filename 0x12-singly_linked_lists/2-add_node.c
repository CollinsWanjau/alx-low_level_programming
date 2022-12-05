#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginnning
 * @head: a pointer to the head of the linked list
 * @str: a pointer to the string
 *
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t nchar;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for(nchar = 0; str[nchar]; nchar++)
		;

	newnode->len = nchar;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

#include "lists.h"

/**
 * free_list - frees a list
 * @head: a pointer to the head
 *
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

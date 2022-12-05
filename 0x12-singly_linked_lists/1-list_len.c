#include "lists.h"

/**
 * list_len - find the number of elements
 * @h: a pointer to the head of the pointed
 *
 * Return: Always 0
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + list_len(h->next));
}

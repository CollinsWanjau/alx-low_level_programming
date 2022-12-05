#include "lists.h"
#include <stdio.h>
/**
 * print_list - a function that prints all elements
 * @h: a pointer to the head of the list
 *
 * Return: numer of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		printf("[0] (nil)");
		return (1);
	}
	else
	{
		printf("[%d], %s\n", h->len, h->str);
		count++;
	}

	return (1 + print_list(h->next));
}

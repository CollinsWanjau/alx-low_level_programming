#include "lists.h"
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	else
		printf("%u\n", h->n);
	return (1 + print_listint(h->next));
}

#include "list.h"
#include <stddef.h>
#include <stdio.h>
size_t print_list(const list_t *h)
{
	size_t count = 1;
	
	if (h == NULL)
		return (0);
	if (h -> str == NULL)
	{
		printf("[0] (nil)");
		return (1);
	}
	else
	{
		printf("[%d], %s\n", h -> len, h -> str);
		count ++;
	}

	return (1 + print_list(h -> next));
}

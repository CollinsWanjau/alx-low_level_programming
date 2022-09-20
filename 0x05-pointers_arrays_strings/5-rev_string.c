#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

int _strlen(char *)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

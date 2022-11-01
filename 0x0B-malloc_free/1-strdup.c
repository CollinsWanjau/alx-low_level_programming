#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicate string
 * or NULL when insufficient memory.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	s = (char *)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (0);
	}

	while ((s[i] = str[i]) != '\0')
	{
		i++;
	}

	return (s);
}

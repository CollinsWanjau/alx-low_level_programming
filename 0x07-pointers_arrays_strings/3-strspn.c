#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix string
 * @s: initial segment
 * @accept: consists only of  bytes
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	/* return 0 if any one is NULL */
	if ((s == NULL) || (accept == NULL))
		return (len);
	/**
	 * return s position if found in accept
	 * if not return NULL
	 */
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}

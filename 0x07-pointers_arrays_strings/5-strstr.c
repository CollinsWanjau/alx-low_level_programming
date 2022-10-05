#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to be scanned
 * @needle: string storing the substring
 *
 * Return: a pointer to the beginning of
 * the located substring or Null if substring
 * is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	for (i = 0; i < strlen(haystack); i++)
	{
		for (j = 0; j < strlen(needle); j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == strlen(needle))
			return (haystack + i);
	}
	return (0);
}

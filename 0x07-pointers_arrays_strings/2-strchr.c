#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string to search
 * @c: char to find
 *
 * Return: A pointer to the first occurence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a); a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}

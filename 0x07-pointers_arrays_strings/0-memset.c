#include "main.h"
/**
 * _memset - fills the first n bytes
 * of the memory area pointed to by s with
 * constant byte b
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled starting from
 * is to be filled
 *
 * Return: Pointer to memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}

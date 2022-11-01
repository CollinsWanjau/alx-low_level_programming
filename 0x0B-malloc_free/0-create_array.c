#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * initializes it with a specific char
 * @size: the size of memory to print
 * @c: char to initialize
 * 
 * Return: Pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0) return (NULL);

	/*initialize buffer with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0) return (NULL);

	else
	{
		position = 0;
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}

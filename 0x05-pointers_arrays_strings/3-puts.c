#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 * @str: string to point
 *
 * Description: prints a string
 * Return: reeturns no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}

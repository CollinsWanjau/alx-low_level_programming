#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 'a'; b < 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
	}
}


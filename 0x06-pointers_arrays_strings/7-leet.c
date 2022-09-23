#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

		for (i = 0; *(s + i); i++)
		{
			for (i = 0; *(s + i); i++)
			{
				if (a[j] == *(s + i))
					*(s + i) = b[j];
			}
		}
	return (s);
}

#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * followed by a new line - if you rename
 * the program, it will print the new name
 * without having to compile again
 * @argc: arguments to be supplied
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}

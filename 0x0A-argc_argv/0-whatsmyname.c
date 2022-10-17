#include <stdio.h>

/**
 * main - a program that prints its name
 * followed by a new line - if you rename
 * the program, it will print the new name
 * without having to compile again
 * @argc: arguments to be supplied
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

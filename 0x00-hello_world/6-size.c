#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the programs description
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int integerType;
long int longIntgerType;
long long int longLongIntegerType;
float floatType;
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of an int: %d byte(s)\n", sizeof(integerType));
printf("Size of an long int: %d byte(s)\n", sizeof(longIntgerType));
printf("Size of an long long int: %d byte(s)\n", sizeof(longLongIntegerType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));
return (0);
}

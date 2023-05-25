#include "search_algos.h"
/**
 * linear_search - searches a value in an array of integers
 * using Linear search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value of key
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
size_t y;
if (array == NULL)
{
return (-1);
}
for (y = 0; y < size; y++)
{
printf("Value checked array[%li] = [%i]\n", y, array[y]);
if (array[y] == value)
{
return (y);
}
}
return (-1);
}

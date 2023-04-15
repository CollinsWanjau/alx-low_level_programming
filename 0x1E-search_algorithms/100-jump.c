#include "search_algos.h"
/**
 * min - searches for the minimum of two values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to b, otherwise `b`
 */
size_t min(size_t a, size_t b)
{
return (a <= b ? a : b);
}
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array
 * @size: size of the array
 * @value: key to be searched
 *
 * Return: the first element of the array to search in
 */
int jump_search(int *array, size_t size, int value)
{
size_t step, prev, fow;
if (!array || size == 0)
return (-1);
step = sqrt(size);
fow = 0;
for (; fow < size && array[fow] < value; prev = fow, fow += step)
{
printf("Value checked array[%lu] = [%d]\n", fow, array[fow]);
}
printf("Value found between indexes [%lu] and [%lu]\n", prev, fow);
for (; prev <= min(fow, size - 1); prev++)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
return (-1);
}

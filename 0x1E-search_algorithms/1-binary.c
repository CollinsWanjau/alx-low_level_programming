#include "search_algos.h"
/**
 * binary_search - searches for a value in a stored array of integers
 * using binary search
 *
 * @array: a pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, value not present
 * must return -1
 */
int binary_search(int *array, size_t size, int value)
{
int l = 0, r = size - 1, mid, i;
if (array == NULL)
{
return (-1);
}
while (l <= r)
{
mid = (l + r) / 2;
printf("Searching in array: ");
for (i = l; i <= r; i++)
{
printf("%d", array[i]);
if (i != r)
printf(", ");
else
printf("\n");
}
if (value == array[mid])
return (mid);
else if (value < array[mid])
r = mid - 1;
else
l = mid + 1;
}
return (-1);
}

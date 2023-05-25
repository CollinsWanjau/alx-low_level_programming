#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to array
 * size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located such that arr[i] == key or -1
 * if there is no i that satisfies this
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t mid;
    if (!array)
        return (-1);
    while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
    {
        mid = low + ((value- array[low]) * (high - low) / (array[high] - array[low]));
        printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
        if (array[mid] < value)
            low = mid + 1;
        else if (value < array[mid])
            high = mid - 1;
        else
            return (mid);
    }
    if (value == array[low])
        return (low);
    else
        return (-1);
}

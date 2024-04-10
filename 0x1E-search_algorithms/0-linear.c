#include "search_algos.h"

/**
 * linear_search - function to search for elements using linear search
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the value, or -1 if not found or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

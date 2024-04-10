#include "search_algos.h"
/**
 * binary_search - performe a binary search
 * @array: pointer to the first element of array
 * @size: size of the array
 * @value: value to be searched
 * Return: index of the value
*/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;
	size_t i;
	int mid;

	if (!array || size == 0)
	{
		return (-1); /* Array is invalid or empty */
	}

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; ++i)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[r]);

		mid = l + (r - l) / 2;

		if (value == array[mid])
		{
			return (mid); /* Value found */
		}
		else if (value < array[mid])
		{
			r = mid - 1; /* Update right pointer */
		}
		else
		{
			l = mid + 1; /* Update left pointer */
		}
	}

	return (-1); /* Value not found */
}

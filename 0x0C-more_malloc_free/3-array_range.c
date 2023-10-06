#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum element
 * @max: maximum element
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int size;
	int i;
	int *output;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);

	else
	for (i = 0; i < size; i++)
	{
		output[i] = min + i;
	}
	return (output);
}

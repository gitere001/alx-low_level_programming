#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: number of elements
 * @c: array variable
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptarray;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	ptarray = malloc(size * sizeof(char));
	if (ptarray == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		ptarray[count] = c;

	}
	return (ptarray);
}

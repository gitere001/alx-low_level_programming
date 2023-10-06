#include "main.h"

/**
 * _calloc -  function allocates memory for an array of nmemb elements of size
 * @nmemb: number of elements
 * @size: the size of the array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	output = calloc(size, nmemb);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}

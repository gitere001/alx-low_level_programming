#include "main.h"

/**
 * _realloc - reallocating memory
 * @ptr: old pointer
 * @old_size: previous allocated size
 * @new_size: newly allocated size
 * Return: pointer to the newly allocated size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, max = new_size;
	char *output;
	char *old_output = ptr;

	if (ptr == NULL)
	{
		output = malloc(new_size);
		return (output);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	output = malloc(new_size);
	if (output == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		output[i] = old_output[i];
	free(ptr);
	return (output);
}

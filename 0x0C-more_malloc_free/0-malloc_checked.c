#include "main.h"
/**
 * malloc_checked - function to allocate memory
 * @b: the size of memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)

		exit(98);
	else
		return (output);
}

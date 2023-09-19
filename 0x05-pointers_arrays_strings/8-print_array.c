#include "main.h"

/**
 * print_array - printing n elements of array
 * @a: pointer to the array
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");

}

#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	if (n <= 1) /* No need to reverse if the array has 0 or 1 element */
		return;

	for (i = 0; i < n / 2; i++)
	{
		/* Swap elements a[i] and a[n - 1 - i] */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

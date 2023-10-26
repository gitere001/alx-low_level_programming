#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: Number to extract the bit from.
 * @index: Index of the bit to get (0-based).
 *
 * Return: Value of the bit at the index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Error: Index out of range */

	return ((n & mask) ? 1 : 0);
}

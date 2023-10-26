#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted and printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit, flag = 0;

	if (n == 0)
	{
	_putchar('0');
	return;
	}

	while (mask > 0)
	{
	bit = (n & mask) ? 1 : 0;

	if (bit || flag)
	{
		_putchar(bit + '0');
	flag = 1;
	}

	mask >>= 1;
	}
}

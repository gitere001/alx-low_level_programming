#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3, first_time = 1;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				if (!first_time)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');
				first_time = 0;
			}
		}
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = 0; second_digit <= 9; second_digit++)
		{
			putchar((first_digit % 10) + '0');
			putchar((second_digit % 10) + '0');

			if (!(first_digit == 9 && second_digit == 9))
			{
				putchar(' ');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

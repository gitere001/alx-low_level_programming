#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase and uppercase alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char letteru = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (letteru <= 'Z')
	{
		putchar(letteru);
		letteru++;
	}

	putchar('\n');

	return (0);
}

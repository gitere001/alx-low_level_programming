#include "main.h"

/**
 * factorial - function to print factorial
 * @n: function parameter
 * Return: factorial of a given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}

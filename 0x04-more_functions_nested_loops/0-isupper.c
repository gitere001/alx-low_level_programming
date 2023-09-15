#include "main.h"

/**
 * _isupper - check upper
 *
 * @c: input character
 *
 * Rreturn: (1) for (0) false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

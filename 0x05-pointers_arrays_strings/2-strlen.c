#include "main.h"
/**
 * _strlen - counting the length of a string
 * @s: the string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}


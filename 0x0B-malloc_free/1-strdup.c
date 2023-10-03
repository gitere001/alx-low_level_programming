#include "main.h"

/**
 * _strdup - function that copy of the string given as a parameter
 * @str: string to be copied
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
                count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)

	copy[i] = str[i];

		return (copy);
}

#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: Variable to hold the string
 *
 * Return: 0 if no error
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

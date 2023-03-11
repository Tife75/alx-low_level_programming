#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: Variable where string would be concatenated
 * @src: Source variable of string to be concatenated
 *
 * Return: 0 if no error
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

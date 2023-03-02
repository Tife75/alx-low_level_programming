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
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + 1) = '\0';

	return (dest);
}

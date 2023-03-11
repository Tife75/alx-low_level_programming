#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: Pointer to destination string to be concatenated.
 * @src: Pointer to source string.
 * @n: Number of bytes to be concatenated.
 *
 * Return: 0 if no error.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++, len++)
	{
		dest[len] = src[j];
	}
	dest[len] = '\0';

	return (dest);
}

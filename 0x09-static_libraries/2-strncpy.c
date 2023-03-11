#include "main.h"

/**
 * _strncpy - Function that copies n number of string.
 * @dest: Pointer to the destination where the content is to be copied.
 * @src: The source string to be copied.
 * @n: The number of characters to be copied.
 *
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
		dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
		dest[byteCount] = '\0';

	return (dest);
}

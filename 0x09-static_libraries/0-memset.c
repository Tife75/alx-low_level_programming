#include "main.h"

/**
 * _memset - Function that fills memory with a n number of byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 *
 * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}

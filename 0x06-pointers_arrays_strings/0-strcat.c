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
	char *newStr = dest;

	while (*dest != '\0')
	{
		*dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}

	*dest = '\0';

	return (*newStr);
}

#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters of a string
 * to uppercase
 * @str: Point to string to be converted
 *
 * Return: str(converted string)
 */

char *string_toupper(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		if (str[len] >= 97 && str[len] <= 122)
		{
			str[len] = str[len] - 32;
		}
		len++;
	}
	return (str);
}

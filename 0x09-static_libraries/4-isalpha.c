#include "main.h"

/**
 * _isalpha - This function checks for alphabetic character
 * @c: Its an ascii value
 *
 * Return: 1 if no error
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

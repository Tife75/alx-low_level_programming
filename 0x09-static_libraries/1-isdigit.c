#include "main.h"

/**
 * _isdigit - A function that checks for a digit 0 - 9
 * @c: It's an integer value
 *
 * Return: 0 if no error
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

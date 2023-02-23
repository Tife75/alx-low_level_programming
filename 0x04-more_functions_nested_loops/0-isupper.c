#include "main.h"

/**
 * _isupper - A function that checks foe uppercase character
 * @c: It's an integer value
 *
 * Return: 0 if no error
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

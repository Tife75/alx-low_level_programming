#include "main.h"

/**
 * _abs - this program compute the absolute value of a number
 * @n: n is an integer
 *
 * Return: 0 if no error
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

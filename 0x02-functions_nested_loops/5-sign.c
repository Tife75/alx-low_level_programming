#include "main.h"

/**
 * print_sign - Function to print sign of a number
 * @n: An integer value
 *
 * Return: 0 if no errors
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}

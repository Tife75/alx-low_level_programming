#include "main.h"

/**
 * print_last_digit - Function that print last digit of a number
 * @c: It's an integer
 *
 * Return: 0 if no error
 */
int print_last_digit(int c)
{
int last = c % 10;

	if (c < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

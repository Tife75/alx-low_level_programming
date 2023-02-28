#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line,
 * to stdout
 * @str: value of type char
 *
 * Return: 0 if no error
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

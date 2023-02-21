#include "main.h"

/**
 * main - This function prints the alphabet in lowercase
 *
 * Return: Null if no errors
 */
void print_alphabet(void)
{
	char alpha = 'a';
	while ('a' <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return;
}

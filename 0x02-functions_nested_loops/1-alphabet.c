#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lowercase
 *
 * Return: Null if no errors
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

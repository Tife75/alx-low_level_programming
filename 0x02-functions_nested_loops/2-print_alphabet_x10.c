#include "main.h"

/**
 * print_alphabet_x10 - This program prints the alphabet in lowercase x10
 *
 * Return: Null if no error
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}

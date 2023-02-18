#include <stdio.h>

/**
 * main- This program print the alphabet in reverse
 *
 * Return: 0 if no error
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}

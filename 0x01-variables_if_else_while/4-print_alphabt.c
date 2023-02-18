#include <stdio.h>

/**
 * main- This program prints the alphabet without 'q' and 'e'
 *
 *Return: 0 if it runs without error
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

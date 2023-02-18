#include <stdio.h>

/**
 * main- This program prints the alphabet in lowercase
 *
 * Return: 0 if it runs without error
 */
int main(void)
{
	char alpha1 = 'a';
	char alpha2 = 'z';

	while (alpha1 <= alpha2)
	{
		putchar(alpha1);
		alpha1++;
	}
	putchar('\n');
	return (0);
}

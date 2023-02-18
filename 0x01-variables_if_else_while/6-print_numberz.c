#include <stdio.h>

/**
 * main- This program prints integers value using putchar
 *
 * Return: 0 if without error
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main- This program a single digit numbers of base 10
 *
 * Return: 0 without errors
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);
}

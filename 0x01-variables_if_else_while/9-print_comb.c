#include <stdio.h>

/**
 * main- Program to print combination of single digit
 *
 * Return: 0 if no errors
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');

		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}

		i++;
	}
	putchar('\n');

	return (0);
}

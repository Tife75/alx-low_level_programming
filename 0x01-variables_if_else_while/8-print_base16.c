#include <stdio.h>

/**
 * main- This program prints hexadecimal number
 *
 * Return: 0 if no error
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
		putchar(i + '0');
		}
		else
		{
		putchar(i - 10 + 'a');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

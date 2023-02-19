#include <stdio.h>

/**
 * main - prints all possible combinatios of single-digit numbers.
 *
 * Return: 0 if no error
 */
int main(void)
{
	int c;
	int i;

	c = 48;
	for (i = 48; (i < 58); i++)
	{
	for (c = 48; c < 58; c++)
	{
	if (c > i)
	{
	putchar(i);
	putchar(c);
	if ((i != 56) || (c != 57))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

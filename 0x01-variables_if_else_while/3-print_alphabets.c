#include <stdio.h>

/**
 * main- This program primts the alphabet in lower case and then uppercase
 *
 * Return: 0 if it runs without error
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');
	return (0);
}

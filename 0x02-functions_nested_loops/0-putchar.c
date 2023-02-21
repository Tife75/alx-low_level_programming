#include <stdio.h>
#include <unistd.h>

/**
 * main- This program prints _putchar
 *
 * Return: 0 if no errors
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}

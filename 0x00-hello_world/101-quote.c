#include <unistd.h>

/**
 * main- program to print using write function
 *
 * Return: 1 if no error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

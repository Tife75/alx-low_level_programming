#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument counter of index in argv
 * @argv: argument vector of main
 *
 * Return: 0 if no error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}

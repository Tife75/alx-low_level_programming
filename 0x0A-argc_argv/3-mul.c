#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument counter of index in argv
 * @argv: argument vector of main
 *
 * Return: 0 if no error
 */

int main(int argc, char *argv[])
{
	int i,  mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < 3; i++)
		mul *= atoi(argv[i]);
	}
	else{
	printf("Error\n");
	}
	
	printf("%d\n", mul);

	return (1);
}

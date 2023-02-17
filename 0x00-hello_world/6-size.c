#include <stdio.h>

/**
 * main- The main fuction where the program starts
 *
 * Return: 0 if program runs without error
 */
int main(void)
{
	printf("Size of char: %li bytes(s)\n", sizeof(char));
	printf("Size of int: %li bytes(s)\n", sizeof(int));
	printf("Size of long int: %li bytes(s)\n", sizeof(long int));
	printf("Size of long long int: %li bytes(s)\n", sizeof(long long int));
	printf("Size of float: %li bytes(s)\n", sizeof(float));
}

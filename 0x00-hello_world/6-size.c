#include <stdio.h>

/**
 * main- The main fuction where the program starts
 *
 * Return: 0 if program runs without error
 */
int main(void)
{
	printf("Size of char: %li\n", sizeof(char));
	printf("Size of int: %li\n", sizeof(int));
	printf("Size of long int: %li\n", sizeof(long int));
	printf("Size of long long int: %li\n", sizeof(long long int));
	printf("Size of float: %li\n", sizeof(float));
}

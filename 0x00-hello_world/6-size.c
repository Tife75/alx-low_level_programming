#include <stdio.h>

/**
 * main- The main fuction where the program starts
 *
 * Return: 0 if program runs without error
 */
int main(void)
{
	printf("Size of char: %lu\n", sizeof(char));
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of long int: %lu\n", sizeof(long int));
	printf("Size of long long int: %lu\n", sizeof(long long int));
	printf("Size of float: %lu\n", sizeof(float));
}

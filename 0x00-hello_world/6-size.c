#include <stdio.h>

/**
 * main- The main fuction where the program starts
 *
 * Return: 0 if program runs without error
 */
int main(void)
{
	printf("Size of char: %ld\n", sizeof(char));
	printf("Size of int: %ld\n", sizeof(int));
	printf("Size of long int: %ld\n", sizeof(long int));
	printf("Size of long long int: %ld\n", sizeof(long long int));
	printf("Size of float: %ld\n", sizeof(float));
}

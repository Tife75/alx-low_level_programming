#include <stdio.h>

/*
 * main - The program starts from here
 * @sizeof: passing the sizeof datatypes to %lu
 */
int main(void)
{
	printf("Size of char: %lu\n", sizeof(char));
	printf("Size of int: %lu\n", sizeof(int));
	printf("Size of long int: %lu\n", sizeof(long int));
	printf("Size of long long int: %lu\n", sizeof(long long int));
	printf("Size of float: %lu\n", sizeof(float));
}

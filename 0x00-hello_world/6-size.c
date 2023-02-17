#include <stdio.h>

/**
  * main- This is where my program start
  *
  * Return: 0 if program runs without error
  */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}

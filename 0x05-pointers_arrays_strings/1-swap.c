#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: Pointer to be swapped
 * @b: Pointer to be swapped
 *
 * Return: 0 if no error
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: The number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int temp, index;

	n = n - 1;
	index = 0;
	while (index <= n)
	{
		temp = a[index];
		a[index++] = a[n];
		a[n--] = temp;
	}
}

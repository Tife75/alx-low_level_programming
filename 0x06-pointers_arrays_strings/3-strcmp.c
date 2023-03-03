#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: Pointer to first string to be compared
 * @s2: Pointer to second string to be compare
 *
 * Return: Negative int if s1 < s2, 0 if matching, and positive int if s1 > s
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

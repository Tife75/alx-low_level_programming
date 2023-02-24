#include <stdio.h>

/**
 * main - This program print the integer value of 1 - 100, for multiples
 * of three it prints Fizz, multiples of five Buzz, multiples of 3 and
 * 5 FizzBuzz
 *
 * Return: 0 if no error
 */

int main(void)
{
        int i;

        for (i = 1; i <= 100; ++i)
        {
                if ((i % 3 == 0) && (i % 5 == 0))
                        printf("FizzBuzz");
                else if (i % 3 == 0)
                        printf("Fizz");
                else if (i % 5 == 0)
                        printf("Buzz");
                else
                        printf("%d", i);

                if (i < 100)
                        printf(" ");
                else
                        printf("\n");
        }
        return (0);
}

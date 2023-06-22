#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    int first = 1;
    int second = 2;
    int next;
    int sum = 2; /* Start with the sum as 2 (since the second term is even) */

    while (second <= 4000000)
    {
        next = first + second;
        if (next % 2 == 0)
        {
            sum += next;
        }

        first = second;
        second = next;
    }

    printf("Sum of even-valued terms: %d\n", sum);

    return 0;
}

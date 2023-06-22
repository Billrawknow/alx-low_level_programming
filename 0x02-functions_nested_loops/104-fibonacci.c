#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers
 *              in a specific format
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count = 2;   /* Number of Fibonacci numbers to generate (excluding 1 and 2) */
    int prev = 1;    /* Previous Fibonacci number */
    int curr = 2;    /* Current Fibonacci number */

    printf("%d, %d", prev, curr); /* Print the first two Fibonacci numbers */

    while (count < 98)
    {
        int next = prev + curr; /* Calculate the next Fibonacci number */
        printf(", %d", next);

        count++;
        prev = curr;
        curr = next;
    }

    printf("\n");

    return 0;
}

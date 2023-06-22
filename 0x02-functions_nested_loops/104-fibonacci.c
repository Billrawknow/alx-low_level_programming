#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers in a specific format
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int prev = 1;  /* Previous Fibonacci number */
    unsigned long int curr = 2;  /* Current Fibonacci number */

    printf("%lu, %lu", prev, curr); /* Print the first two Fibonacci numbers */

    int count;  /* Declaration moved here */

    for (count = 3; count <= 98; count++)
    {
        unsigned long int next = prev + curr; /* Calculate the next Fibonacci number */
        printf(", %lu", next);

        prev = curr;
        curr = next;
    }

    printf("\n");

    return 0;
}

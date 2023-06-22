#include <stdio.h>

int main(void)
{
    int count = 2; /* Number of Fibonacci numbers to generate (excluding 1 and 2) */
    int prev = 1; /* Previous Fibonacci number */
    int curr = 2; /* Current Fibonacci number */

    printf("%d, %d, ", prev, curr); /* Print the first two Fibonacci numbers */

    while (count < 98)
    {
        int next = prev + curr; /* Calculate the next Fibonacci number */
        printf("%d", next);

        if (count != 97) /* Check if it's the last number */
            printf(", ");
        else
            printf("\n");

        count++;
        prev = curr;
        curr = next;
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    unsigned long first = 1;
    unsigned long second = 2;
    unsigned long next;
    unsigned long sum = 2; // Start with the sum as 2 (since the second term is even)

    printf("1, 2, "); // Print the first two terms of the Fibonacci sequence

    while (next <= 4000000)
    {
        next = first + second;
        if (next % 2 == 0)
        {
            sum += next;
        }
        printf("%lu, ", next); // Print the next term
        first = second;
        second = next;
    }

    printf("\nSum of even-valued terms: %lu\n", sum); // Print the sum of even-valued terms

    return 0;
}

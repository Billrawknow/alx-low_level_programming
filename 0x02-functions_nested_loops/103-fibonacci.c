#include <stdio.h>

int main(void)
{
    unsigned long long first = 1;
    unsigned long long second = 2;
    unsigned long long next;
    unsigned long long sum = 2; // Start with the sum as 2 (since the second term is even)

    printf("1, 2, "); // Print the first two terms of the Fibonacci sequence

    while (next <= 4000000)
    {
        next = first + second;
        if (next % 2 == 0)
        {
            sum += next;
        }
        printf("%llu, ", next); // Print the next term
        first = second;
        second = next;
    }

    printf("\nSum of even-valued terms: %llu\n", sum); // Print the sum of even-valued terms

    return 0;
}

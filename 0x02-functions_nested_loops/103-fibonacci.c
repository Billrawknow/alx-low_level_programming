#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long long first = 1;
    unsigned long long second = 2;
    unsigned long long next;
    unsigned long long sum = 0;

    // Print the first two terms of the Fibonacci sequence
    printf("%llu, %llu, ", first, second);
    
    // Find and sum the even-valued terms
    while (second <= 4000000)
    {
        if (second % 2 == 0)
            sum += second;
        
        next = first + second;
        first = second;
        second = next;
    }
    
    printf("\nSum of even-valued terms: %llu\n", sum);

    return 0;
}

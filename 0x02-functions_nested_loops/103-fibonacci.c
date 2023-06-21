#include <stdio.h>

int main() {
    int first = 1;
    int second = 2;
    int next = 0;
    int sum = 2; /* Start with the sum as 2 (since the second term is even) */

    printf("%d, %d, ", first, second); /* Print the first two terms of the Fibonacci sequence */

    while (next <= 4000000) {
        next = first + second;
        if (next % 2 == 0) {
            sum += next;
        }
        printf("%d, ", next); /* Print the next term */
        first = second;
        second = next;
    }

    printf("\nSum of even-valued terms: %d\n", sum); /* Print the sum of even-valued terms */

    return 0;
}

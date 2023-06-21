#include <stdio.h>

int main() {
    int first = 1;
    int second = 2;
    int next;
    int sum = 2; // Start with the sum as 2 (since the second term is even)

    printf("%d, %d, ", first, second);

    while (second <= 4000000) {
        next = first + second;
        if (next % 2 == 0) {
            sum += next;
        }
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\nSum of even-valued terms: %d\n", sum);

    return 0;
}

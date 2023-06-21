#include <stdio.h>

void print_fibonacci_sequence(int n) {
    unsigned long first = 1;
    unsigned long second = 2;
    unsigned long next;
    int i;

    printf("%lu, %lu", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %lu", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main(void) {
    print_fibonacci_sequence(50);
    return 0;
}

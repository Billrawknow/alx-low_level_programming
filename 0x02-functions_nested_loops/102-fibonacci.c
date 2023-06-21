#include <stdio.h>

void print_fibonacci_sequence(int n) {
    unsigned long long first = 1;
    unsigned long long second = 2;
    unsigned long long next;
    int i;

    printf("%llu, %llu", first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %llu", next);
        first = second;
        second = next;
    }

    printf("\n");
}

int main(void) {
    print_fibonacci_sequence(50);
    return 0;
}

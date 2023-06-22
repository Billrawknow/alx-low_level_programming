#include <stdio.h>

int main() {
    int sum = 0;
    int first = 1;
    int second = 2;
    int next;

    while (second <= 4000000) {
        if (second % 2 == 0) {
            sum += second;
        }
        next = first + second;
        first = second;
        second = next;
    }

    printf("Sum of even-valued terms: %d\n", sum);

    return 0;
}

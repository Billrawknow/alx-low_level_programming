#include <stdio.h>

int main() {
    int first = 1;
    int second = 2;
    int next;
    int sum = 0;

    printf("%d, %d, ", first, second);

    while (second <= 4000000) {
        if (second % 2 == 0) {
            sum += second;
        }
        next = first + second;
        first = second;
        second = next;
    }

    printf("\nSum of even-valued terms: %d\n", sum);

    return 0;
}

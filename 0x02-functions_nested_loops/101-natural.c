#include <stdio.h>

int calculate_sum() {
    int total_sum = 0;
    int number;

    for (number = 1; number < 1024; number++) {
        if (number % 3 == 0 || number % 5 == 0) {
            total_sum += number;
        }
    }

    return total_sum;
}

int main(void) {
    int result = calculate_sum();
    printf("%d\n", result);

    return 0;
}

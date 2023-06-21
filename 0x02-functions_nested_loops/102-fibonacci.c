#include <stdio.h>

void print_fibonacci_sequence(int n) {
    int first = 1;
    int second = 2;
    int next;
    
    int i; // Move the declaration here
    
    printf("%d, %d", first, second);
    
    for (i = 3; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
    
    printf("\n");
}

int main(void) {
    print_fibonacci_sequence(50);
    return 0;
}

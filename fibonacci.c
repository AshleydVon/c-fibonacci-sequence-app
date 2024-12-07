
#include <stdio.h>
#include <stdlib.h>

void print_fibonacci(int n) {
    int first = 0, second = 1, next;
    printf("Fibonacci Series: ");
    
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

void print_fibonacci_max(int max_value) {
    int first = 0, second = 1, next = 0;
    printf("Fibonacci Series (up to %d): ", max_value);
    
    while (next <= max_value) {
        printf("%d ", next);
        if (next == 0) {
            next = 1;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
    }
    printf("\n");
}

int main() {
    int choice, terms, max_value;
    
    printf("Fibonacci Sequence Generator\n");
    printf("1. Generate by number of terms\n");
    printf("2. Generate up to a maximum value\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter the number of terms: ");
            scanf("%d", &terms);
            print_fibonacci(terms);
            break;
        case 2:
            printf("Enter the maximum value: ");
            scanf("%d", &max_value);
            print_fibonacci_max(max_value);
            break;
        default:
            printf("Invalid choice. Exiting...\n");
            return 1;
    }
    
    return 0;
}

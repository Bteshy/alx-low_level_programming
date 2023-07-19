#include <stdio.h>

int main() {
    int count = 98;
    int fib1 = 1, fib2 = 2;
    int fib;
    int i = 3

    printf("%d, %d", fib1, fib2);

    for (i = 3; i <= count; i++) {
        fib = fib1 + fib2;
        printf(", %d", fib);

        fib1 = fib2;
        fib2 = fib;
    }

    printf("\n");

    return 0;
}

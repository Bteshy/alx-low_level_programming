#include <stdio.h>

void print_row(int row, int n) {
    int product, tens, ones;

    for (int column = 0; column <= n; column++) {
        product = row * column;
        tens = product / 10;
        ones = product % 10;

        if (column == 0)
            printf("%2d", product);
        else
            printf(", %2d", product);
    }

    printf("\n");
}

void times_table(int n) {
    if (n >= 0 && n < 15) {
        for (int row = 0; row <= n; row++) {
            print_row(row, n);
        }
    }
}

int main() {
    int n = 9;
    times_table(n);

    return 0;
}

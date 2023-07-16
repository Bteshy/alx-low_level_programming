#include <stdio.h>

/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main() {
    char l = 'a';
    char L = 'A';

    // Print lowercase alphabet
    while (l <= 'z') {
        putchar(l);
        l++;
    }

    // Print uppercase alphabet
    while (L <= 'Z') {
        putchar(L);
        L++;
    }

    // Print new line
    putchar('\n');

    return 0;
}

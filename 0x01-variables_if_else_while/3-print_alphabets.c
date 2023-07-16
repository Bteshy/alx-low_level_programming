#include <stdio.h>

/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void) 
{
    char l = 'a';
    char L = 'A';

    while (l <= 'z') 
    {
        putchar(l);
        l++;
    }

    while (L <= 'Z') 
    {
        putchar(L);
        L++;
    }

    putchar('\n');
    return (0);
}

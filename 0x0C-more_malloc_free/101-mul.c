#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_number(char *num) {
    while (*num) {
        if (!isdigit(*num)) {
            return 0;
        }
        num++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!is_valid_number(num1) || !is_valid_number(num2)) {
        printf("Error\n");
        return 98;
    }

    int len1 = 0;
    int len2 = 0;
    while (num1[len1]) len1++;
    while (num2[len2]) len2++;

    int total_len = len1 + len2;
    int *result = (int *)calloc(total_len, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    int start = 0;
    while (start < total_len && result[start] == 0) start++;

    if (start == total_len) {
        printf("0\n");
    } else {
        for (; start < total_len; start++) {
            printf("%d", result[start]);
        }
        printf("\n");
    }

    free(result);
    return 0;
}

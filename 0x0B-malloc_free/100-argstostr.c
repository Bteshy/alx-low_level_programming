#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av) {
    if (ac == 0 || av == NULL) {
        return NULL;
    }

    // Calculate the total length needed for the concatenated string
    int total_length = 0, int i = 0;
    for (i = 0; i < ac; i++) {
        total_length += strlen(av[i]) + 1; // +1 for newline character
    }

    // Allocate memory for the concatenated string
    char *result = (char *)malloc(total_length * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    int current_index = 0;

    // Copy each argument with newline into the concatenated string
    for (i = 0; i < ac; i++) {
        strcpy(result + current_index, av[i]);
        current_index += strlen(av[i]);
        result[current_index] = '\n';
        current_index++;
    }

    result[current_index] = '\0'; // Add the null-terminator

    return result;
}

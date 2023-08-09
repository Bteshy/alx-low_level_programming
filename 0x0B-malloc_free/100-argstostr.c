#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = 0;
    char **words = NULL;

    char *c = str;
    while (*c != '\0') {
        while (is_space(*c)) {
            c++;
        }

        if (*c == '\0') {
            break;
        }

        num_words++;

        char *word_start = c;
        while (*c && !is_space(*c)) {
            c++;
        }

        char *word = (char *)malloc((c - word_start + 1) * sizeof(char));
        if (word == NULL) {
            for (int i = 0; i < num_words - 1; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }

        strncpy(word, word_start, c - word_start);
        word[c - word_start] = '\0';

        words = (char **)realloc(words, num_words * sizeof(char *));
        if (words == NULL) {
            free(word);
            for (int i = 0; i < num_words - 1; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }

        words[num_words - 1] = word;
    }

    words = (char **)realloc(words, (num_words + 1) * sizeof(char *));
    if (words == NULL) {
        for (int i = 0; i < num_words; i++) {
            free(words[i]);
        }
        free(words);
        return NULL;
    }

    words[num_words] = NULL;

    return words;
}

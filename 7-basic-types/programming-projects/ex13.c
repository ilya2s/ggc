/**
 * Write a program that calculates the average word length for a sentence:
 *
 * Enter a sentence: It was deja vu all over again.
 * Average word length: 3.4
 *
 * For simplicity, your program should consider a punctuation mark to be part of
 * the word to which it is attached. Display the average word length to one
 * decimal place.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calculate_average_word_length(const char *sentence) {
    char sentence_buffer[100];
    int total_length = 0;
    int word_count = 0;

    strncpy(sentence_buffer, sentence, sizeof(sentence_buffer));
    sentence_buffer[sizeof(sentence_buffer) - 1] = '\0';

    char *token = strtok(sentence_buffer, " ");
    while (token != NULL) {
        total_length += strlen(token);
        word_count++;
        token = strtok(NULL, " ");
    }

    return (double)total_length / word_count;
}

int main(int argc, char *argv[]) {
    char input[100];
    double average_word_length;

    printf("Enter a sentence: ");

    if (!fgets(input, sizeof(input), stdin)) {
        printf("Error reading input.\n");
        return EXIT_FAILURE;
    }

    input[strcspn(input, "\n")] = '\0';

    average_word_length = calculate_average_word_length(input);

    printf("Average word length: %.1f\n", average_word_length);

    return 0;
}

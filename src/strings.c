#include <stdio.h>
#include <string.h>
#include "string_utils.h"

#define MAX_LENGTH 256

int main() {
    char text[MAX_LENGTH];

    printf("Geben Sie einen Text ein: ");
    if (fgets(text, MAX_LENGTH, stdin) != NULL) {
        text[strcspn(text, "\n")] = 0;

        printf("\nOriginal: %s\n", text);
        printf("Länge: %d Zeichen\n", count_chars(text));

        to_uppercase(text);
        printf("Großbuchstaben: %s\n", text);
    }

    return 0;
}

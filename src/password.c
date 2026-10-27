#include <stdio.h>
#include <string.h>
#include "string_utils.h"

#define MAX_LENGTH 100

int main() {
    char password[MAX_LENGTH];

    printf("Geben Sie ein Passwort ein: ");
    if (fgets(password, MAX_LENGTH, stdin) != NULL) {
        password[strcspn(password, "\n")] = 0;

        printf("Passwortlänge: %d Zeichen\n", count_chars(password));

        if (check_password_strength(password)) {
            printf("✓ Passwort ist stark genug!\n");
        } else {
            printf("✗ Passwort ist zu schwach!\n\n");
            print_password_requirements();
        }
    }

    return 0;
}

#include "debug.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "string_utils.h"

int check_password_strength(const char *password) {
    int length = strlen(password);
    int has_digit = 0;
    int has_upper = 0;
    int has_lower = 0;

    if (length < 8) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (password[i] >= '0' && password[i] <= '9') has_digit = 1;
        if (password[i] >= 'A' && password[i] <= 'Z') has_upper = 1;
        if (password[i] >= 'a' && password[i] <= 'z') has_lower = 1;
    }
DEBUG_PRINT("Passwort-Länge: %d\n", length);
DEBUG_PRINT("has_digit=%d, has_upper=%d, has_lower=%d\n",
            has_digit, has_upper, has_lower);
    return has_digit && has_upper && has_lower;
}

void print_password_requirements(void) {
    printf("Passwort-Anforderungen:\n");
    printf("  - Mindestens 8 Zeichen\n");
    printf("  - Mindestens ein Großbuchstabe\n");
    printf("  - Mindestens ein Kleinbuchstabe\n");
    printf("  - Mindestens eine Ziffer\n");
}

int count_chars(const char *str) {
    return strlen(str);
}

void to_uppercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

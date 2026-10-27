#include <stdio.h>
#include "debug.h"
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int numbers[] = {5, 10, 12, 15};

    // Bug: i <= 4 greift über das Array hinaus (Array hat nur 4 Elemente: Index 0-3)
    for (int i = 0; i < 4; i++) {
    DEBUG_PRINT("i = %d, numbers[i] = %d\n", i, numbers[i]);    
    int n = numbers[i];
    printf("Fakultät von %d ist %lld\n", n, factorial(n));    }

    return 0;
}

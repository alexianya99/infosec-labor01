#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>

// Standardmäßig aus; einschalten mit gcc -DDEBUG=1
#ifndef DEBUG
#define DEBUG 0
#endif

#if DEBUG
    #define DEBUG_PRINT(fmt, ...) \
        fprintf(stderr, "DEBUG %s:%d: " fmt, __FILE__, __LINE__, ##__VA_ARGS__)
#else
    #define DEBUG_PRINT(fmt, ...) do {} while (0)
#endif

#endif

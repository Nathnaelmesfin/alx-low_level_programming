#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - Entry Point
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0') {
            result = result * 2;
        } else if (b[i] == '1') {
            result = result * 2 + 1;
        } else {
            return 0;
        }
    }

    return result;
}

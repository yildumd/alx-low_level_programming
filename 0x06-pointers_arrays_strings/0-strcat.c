#include <stdio.h>

char* strcat(char* destination, const char* source) {
    char* ptr = destination;

    /* Find the end of the destination string */
    while (*ptr)
        ptr++;

    /* Append the source string to the destination */
    while (*source) {
        *ptr = *source;
        ptr++;
        source++;
    }

    /* Add the null terminator at the end */
    *ptr = '\0';

    return destination;
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    printf("Before concatenation: %s\n", str1);
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    return 0;
}

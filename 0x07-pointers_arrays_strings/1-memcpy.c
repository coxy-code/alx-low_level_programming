#include <stdio.h>
#include "main.h"

char* _memcpy(char* dest, char* src, unsigned int n) {
    // Implementation of _memcpy function (same as before)
}

int main() {
    char src[] = "Source String";
    char dest[20];

    _memcpy(dest, src, sizeof(src));
    printf("Copied string: %s\n", dest);

    return 0;
}


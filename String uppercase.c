#include <stdio.h>

void toUppercase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;
        }
        str++;
    }
}

int main() {
    char s[] = "hello world";
    toUppercase(s);
    printf("Uppercase: %s\n", s);
    return 0;
}

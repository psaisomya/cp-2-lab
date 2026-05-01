#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide a string.\n");
        return 1;
    }

    printf("Uppercase: ");
    for (int i = 0; argv[1][i] != '\0'; i++) {
        putchar(toupper(argv[1][i]));
    }
    printf("\n");
    return 0;
}

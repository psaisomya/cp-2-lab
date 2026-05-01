#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "a");
    if (fp == NULL) return 1;

    fprintf(fp, "\nThis text is being appended.");
    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}

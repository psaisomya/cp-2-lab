#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    if (fp == NULL) return 1;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}

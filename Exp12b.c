#include <stdio.h>

int main(int argc, char *argv[]) {
    // Subtract 1 because argv[0] is the program name itself
    printf("Number of arguments passed: %d\n", argc - 1);
    return 0;
}

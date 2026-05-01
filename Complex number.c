#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2) {
    struct Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}

int main() {
    struct Complex a = {3.5, 2.5}, b = {1.5, 4.5}, sum;
    sum = add(a, b);
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}

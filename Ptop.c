// Create a program where a pointer to a pointer (e.g., **p) is used to access and modify a variable of type short.
#include <stdio.h>
#include <stdlib.h>
int main() {
    short value = 10;       
    short *p = &value;    
    short **pt = &p;  
    **pt=20;
     printf("Modified value: %d \n", value);
    printf("Access by *p: %d\n", *p);
    printf("Access by **p: %d\n", **pt);

    return 0;
}

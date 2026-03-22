//Can a union contain a bit-field? Demonstrate with an example.
#include <stdio.h>
union Test
{char name[30];
int a ;
double b;
};
main(){
union Test t1;
t1.a=10;
t1.b=10.45;
printf("%d %lf",t1.a,t1.b);
}

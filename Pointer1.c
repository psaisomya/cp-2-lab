/*Write a program to create a pointer to an integer variable and demonstrate how
the pointer can modify the value of the variable.*/
#include <stdio.h>
main()
{int number=10;
printf("original value of number %d",10);
int *p;
p=&number;
*p=25;
printf("the modified number of a is: %d\n",25);
return 0;
}

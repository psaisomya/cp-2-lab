
/*Write a program to swap two numbers using call by reference.*/
#include<stdio.h>
void swap(int *x, int *y);
int main()
{
int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
printf("\nBefore Swapping: a = %d, b = %d\n", a, b);
swap(&a, &b);
printf("After Swapping:  a = %d, b = %d\n", a, b);
return 0;
}
void swap(int *x, int *y) {
int temp;
temp = *x;  
*x = *y;    
*y = temp;  
}

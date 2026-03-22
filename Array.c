//Write a program to input an array of integers and print them using pointers.
#include <stdio.h>
#include <stdlib.h>
int main()
{int arr[5],*p;
printf("enter 5 elements\n");
for(p=arr;p<arr+5;p++)
scanf("%d",p);
printf("array elements \n");
for(p=arr;p<arr+5;p++)
printf("%d",*p);
return 0;
}

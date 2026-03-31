//Implement a function to find the largest element in an array using pointers. 
#include <stdio.h>
#include <stdlib.h>
int main()
{int arr[5],*p,max;
printf("enter 5 numbers:\n");
for(p=arr;p<arr+5;p++)
scanf("%d",p);
max=*arr;
for(p=arr;p<arr+5;p++)
{if (*p>max)
max=*p;
}
printf("largest element %d",max);
}

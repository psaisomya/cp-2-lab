//Write a program to compare two strings using strcmp. 
#include <stdio.h>
#include <string.h>
void main()
{int result;
char a[20],b[20];
printf("Enter a string:");
gets(a);
printf("enter another string:");
gets(b);
strcmp(a,b); 
if(result==strcmp(a,b))
printf("both are equal");
else
printf("both are not equal");

}

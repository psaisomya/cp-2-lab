//To find the factorial of a number.
#include<stdio.h>
int fact(int n)
{if(n==0)
	return 1;
	
	
else
	return n*fact(n-1);
}
void main()
{ int f=fact(12);
	printf("the factorial of the number is %d",f);
}

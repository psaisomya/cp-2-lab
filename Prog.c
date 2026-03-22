#include <stdio.h>
int main()
{int numb[]={10,20,30,40};
int *p=numb;
int i;
for(i=0;i<4;i++)
*(p+i)=*(p+i)*10;
for(i=0;i<4;i++)
printf("\n%d",numb[i]);
}

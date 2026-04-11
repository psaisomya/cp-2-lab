/*Define a function swapDistance() for the structure defined in question no.2, to
swap the content of two Distance variables. */
#include<stdio.h>
struct distance
{
int km,cm,m;
};
void swapdistance(struct distance*a,struct distance*b)
{
struct distance temp;
temp=*a;
*a=*b;
*b=temp;
}
void main()
{
struct distance d1,d2;
printf("Enter first distance(km m cm):");
scanf("%d %d %d",&d1.km,&d1.m,&d1.cm);
printf("Enter second distance(km m cm):");
scanf("%d %d %d",&d2.km,&d2.m,&d2.cm);
swapdistance(&d1,&d2);
printf("After swapping\n:");
printf("Distance 1:%dkm %dcm %dm\n",d1.km,d1.m,d1.cm);
printf("Distance 2:%dkm %dcm %dm\n",d2.km,d2.m,d2.m);
}

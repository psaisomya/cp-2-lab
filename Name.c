#include<stdio.h>
#include<string.h>
int main()
{char name[11];
char sic[8];
printf("Enter your name:");
gets(name);
printf("Enter your sic number");
scanf("%s",sic);
printf("Name=%s \n sic=%s",name,sic);
return 0;
}

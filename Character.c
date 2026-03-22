#include <stdio.h>
#include <string.h>
int main()
{char ch[100];
int i;
printf("enter a string");
gets(ch);
for(i=0;ch[i]!='\0';i++)
{printf("%c\n",ch[i]);
}
return 0;
}

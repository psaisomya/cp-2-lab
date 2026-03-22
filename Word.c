//wap to find the number words in a sentence
#include<stdio.h>
#include<string.h>
main()
{char s[20];
int i,count=0;
puts("sent:\n");
gets(s);
for(i=0;s[i]!=0;i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("%d",count+1);
}

//Create a program to illustrate the use of pointers with character variables.Include both reading and printing the character via the pointer. 
#include <stdio.h>
main(){
char b='a';
char *cp=&b;
printf("%c %u",*cp,cp);
}
